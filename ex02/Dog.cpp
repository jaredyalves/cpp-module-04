#include "Dog.hpp"

#include <iostream>

Dog::Dog()
    : _brain(new Brain)
{
    std::cout << "[DEBUG] Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog& other)
    : Animal(other)
{
    std::cout << "[DEBUG] Dog copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}

Dog::~Dog()
{
    std::cout << "[DEBUG] Dog destructor called" << std::endl;
    delete _brain;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "[DEBUG] Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
        *_brain = *other._brain;
    }
    return *this;
}

Brain* Dog::getBrain() const
{
    return _brain;
}

void Dog::setBrain(Brain* const brain)
{
    _brain = brain;
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}
