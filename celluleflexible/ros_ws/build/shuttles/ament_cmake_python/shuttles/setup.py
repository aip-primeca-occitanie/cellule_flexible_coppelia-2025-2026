from setuptools import find_packages
from setuptools import setup

setup(
    name='shuttles',
    version='0.0.0',
    packages=find_packages(
        include=('shuttles', 'shuttles.*')),
)
