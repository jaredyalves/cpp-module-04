#include "Dog.hpp"

#include <iostream>

void Dog::makeSound() const
{
    std::cout << "[DEBUG] Dog makeSound() member function called" << std::endl;
    std::cout << "Woof" << std::endl;
}

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
        Animal::operator=(other);
    }
    return *this;
}
