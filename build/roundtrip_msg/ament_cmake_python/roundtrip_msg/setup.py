from setuptools import find_packages
from setuptools import setup

setup(
    name='roundtrip_msg',
    version='0.0.0',
    packages=find_packages(
        include=('roundtrip_msg', 'roundtrip_msg.*')),
)
