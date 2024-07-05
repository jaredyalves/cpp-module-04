#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
    std::cout << "[DEBUG] Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat& other)
    : Animal(other)
{
    std::cout << "[DEBUG] Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[DEBUG] Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "[DEBUG] Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
