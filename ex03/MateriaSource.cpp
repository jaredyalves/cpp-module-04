#include "MateriaSource.hpp"

#include <iostream>

void MateriaSource::learnMateria(AMateria* m)
{
    std::cout << "[DEBUG] MateriaSource learnMateria() member function called" << std::endl;
    if (_count < SOURCES_MAX && m)
        _sources[_count++] = m;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    std::cout << "[DEBUG] MateriaSource createMateria() member function called" << std::endl;
    for (int i = 0; i < SOURCES_MAX; ++i)
    {
        if (_sources[i] && _sources[i]->getType() == type)
            return _sources[i]->clone();
    }
    return NULL;
}

MateriaSource::MateriaSource()
    : _sources(),
      _count(0)
{
    std::cout << "[DEBUG] MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < SOURCES_MAX; ++i)
        _sources[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
    : _sources(),
      _count(other._count)
{
    std::cout << "[DEBUG] MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < SOURCES_MAX; ++i)
    {
        if (other._sources[i])
            _sources[i] = other._sources[i]->clone();
        else
            _sources[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    std::cout << "[DEBUG] MateriaSource destructor called" << std::endl;
    for (int i = 0; i < SOURCES_MAX; ++i)
        delete _sources[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "[DEBUG] MateriaSource copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < SOURCES_MAX; ++i)
            delete _sources[i];
        for (int i = 0; i < SOURCES_MAX; ++i)
        {
            if (other._sources[i])
                _sources[i] = other._sources[i]->clone();
            else
                _sources[i] = NULL;
        }
        _count = other._count;
    }
    return *this;
}
