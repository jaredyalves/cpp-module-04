#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal()
    : _type("Unknown")
{
    std::cout << "[DEBUG] WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
    : _type(other._type)
{
    std::cout << "[DEBUG] WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[DEBUG] WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "[DEBUG] WrongAnimal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::setType(const std::string& type)
{
    _type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Unknown" << std::endl;
}
