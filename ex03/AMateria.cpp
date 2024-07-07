#include "AMateria.hpp"

#include <iostream>

const std::string& AMateria::getType() const
{
    return _type;
}

AMateria::AMateria()
    : _type("unknown")
{
    std::cout << "[DEBUG] AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type)
    : _type(type)
{
    std::cout << "[DEBUG] AMateria param constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
    : _type(other._type)
{
    std::cout << "[DEBUG] AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "[DEBUG] AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "[DEBUG] AMateria copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}
