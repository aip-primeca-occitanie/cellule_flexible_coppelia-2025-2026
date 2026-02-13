from setuptools import find_packages
from setuptools import setup

setup(
    name='commande_locale',
    version='3.1.2',
    packages=find_packages(
        include=('commande_locale', 'commande_locale.*')),
)
