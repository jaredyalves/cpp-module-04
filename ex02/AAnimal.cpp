#include "AAnimal.hpp"

#include <iostream>

std::string AAnimal::getType() const
{
    std::cout << "[DEBUG] AAnimal getType() member function called" << std::endl;
    return _type;
}

void AAnimal::setType(const std::string& type)
{
    std::cout << "[DEBUG] AAnimal setType() member function called" << std::endl;
    _type = type;
}

AAnimal::AAnimal()
    : _type("Unknown")
{
    std::cout << "[DEBUG] AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
    : _type(other._type)
{
    std::cout << "[DEBUG] AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "[DEBUG] AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "[DEBUG] AAnimal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}
