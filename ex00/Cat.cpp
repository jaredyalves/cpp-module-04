#include "Cat.hpp"

#include <iostream>

void Cat::makeSound() const
{
    std::cout << "[DEBUG] Cat makeSound() member function called" << std::endl;
    std::cout << "Meow" << std::endl;
}

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
        Animal::operator=(other);
    }
    return *this;
}
