from setuptools import find_packages
from setuptools import setup

setup(
    name='robots',
    version='3.1.2',
    packages=find_packages(
        include=('robots', 'robots.*')),
)
