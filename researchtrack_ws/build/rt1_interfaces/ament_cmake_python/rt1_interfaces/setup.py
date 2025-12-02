from setuptools import find_packages
from setuptools import setup

setup(
    name='rt1_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('rt1_interfaces', 'rt1_interfaces.*')),
)
