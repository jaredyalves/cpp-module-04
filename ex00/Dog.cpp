#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
    std::cout << "[DEBUG] Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog& other)
    : Animal(other)
{
    std::cout << "[DEBUG] Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "[DEBUG] Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "[DEBUG] Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}
