#include "Animal.hpp"

#include <iostream>

Animal::Animal()
    : _type("Unknown")
{
    std::cout << "[DEBUG] Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
    : _type(other._type)
{
    std::cout << "[DEBUG] Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[DEBUG] Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "[DEBUG] Animal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::setType(const std::string& type)
{
    _type = type;
}

void Animal::makeSound() const
{
    std::cout << "Unknown" << std::endl;
}
