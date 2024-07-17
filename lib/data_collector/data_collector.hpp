#pragma once

#include <cmath>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>

template <typename T>
class DataCollector
{
private:
    std::vector<T> data;  // the data structure is a vector class

    //*** Methods ***//
    double average(size_t start, size_t end) const
    {
        if (data.empty())
        {
            std::cerr << "average: Data is empty";
            return 0;
        }
        double sum = accumulate(data.begin() + start, data.begin() + end, 0.0);
        return sum / (end - start);
    }

    double std(size_t start, size_t end) const
    {
        if (data.empty())
        {
            std::cerr << "std: Data is empty";
            return 0;
        }
        double mean = average(start, end);
        double sq_sum = inner_product(data.begin() + start, data.begin() + end, data.begin() + start, 0.0);
        double stdev = sqrt(sq_sum / (end - start) - mean * mean);
        return stdev;
    }

public:
    size_t maxLength =
        1000000;  // to avoid having too much memory, restrict the maximum size to something big while using it
    std::string datafilename = "mydata.csv";  // Default name, can be changed via .datafilename

    //*** Methods ***//
    size_t size() const  // gives size of data vector - necessary as data is private
    {
        return data.size();
    }

    /// <summary>
    /// Default constructor with default datafilename="data.csv" and default maxLength=10000
    /// </summary>
    DataCollector()
    {
        maxLength = std::min(maxLength, data.max_size());
        // cout << "Max Size: " << data.max_size() << '\n'; // m�ssen wir bei den Boards mal ausgeben lassen - keine
        // Ahnung was da rauskommt.
        data.reserve(this->maxLength);  // allocate concurrent memory for best practice
    }

    /// <summary>
    /// Cheap workaround copy constructor. This enables a DataCollector to start with data, in case someone needs to
    /// make a copy in a quick and dirty way
    /// </summary>
    /// <param name="entries"></param>
    DataCollector(const std::vector<T>& entries) : data(entries)
    {
        maxLength = std::min(maxLength, data.max_size());
        data.reserve(this->maxLength);
    }

    /// <summary>
    /// add() extends the data vector by the value. If the total length exceeds maxLength, write all to file and erase
    /// the data.
    /// </summary>
    /// <param value="value"></param>
    void add(T value)
    {
        data.push_back(value);
        if (data.size() > maxLength)
        {
            exportCSV();
            data.clear();
        }
    }

    /// <summary>
    /// exportCSV() exports the data in a new line in the datafilename (default "data.csv") as CSV with ";" as
    /// delimiter. Everytime this is called, a new line is written. Note that the datafilename is not deleted with the
    /// start of the program.
    /// </summary>
    void exportCSV() const
    {
        std::ofstream file(datafilename, std::ios::app);  // Open file in append mode
        if (!file.is_open())
        {
            std::cerr << "exportCSV: Failed to open file";
            throw std::runtime_error("Failed to open file");
        }
        for (const auto& entry : data)
        {
            file << entry << "\n";
        }
        file << "\n";
    }

    /// <summary>
    /// deleteCSV() deletes the datafilename (default "data.csv"), if it exists.
    /// </summary>
    void deleteCSV() const
    {
        if (std::filesystem::exists(datafilename))
        {
            std::filesystem::remove(datafilename);
        }
    }

    /// <summary>
    /// analyze(start, end) does the analysis of the data from start to end index. There is an overload function that
    /// takes no arguments and does all of the data
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    void analyze(size_t start, size_t end) const
    {
        if (data.empty())
        {
            std::cerr << "analyze: Data is empty \n";
            return;
        }

        if (start >= data.size() || end > data.size() || start > end)
        {
            std::cerr << "analyze: Invalid range";
            throw std::out_of_range("Invalid range");
            return;
        }
        T min_val = *min_element(data.begin() + start, data.begin() + end);
        T max_val = *max_element(data.begin() + start, data.begin() + end);
        double avg = average(start, end);
        double stddev = std(start, end);

        // Set the precision and format for floating-point numbers
        std::cout << std::fixed << std::setprecision(2);

        // Print the results in a single line with fixed-width fields of width w, accounting for 2 decimals with comma
        auto w = 6;
        std::cout << std::setw(2) << "Min:" << std::setw(w) << min_val << std::setw(10) << "Max:" << std::setw(w)
                  << max_val << std::setw(10) << "Avg:" << std::setw(w + 3) << avg << std::setw(10)
                  << "Std:" << std::setw(w + 3) << stddev << '\n';
    }
    /// <summary>
    /// analyze() does the analysis of the whole data. Internally it calls analyze(0, data.size())
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    void analyze() const
    {
        analyze(0, data.size());  // Simply call analyze for the whole data vector, however long it may be
    }
};
