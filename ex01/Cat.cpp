#include "Cat.hpp"

#include <iostream>

Cat::Cat()
    : _brain(new Brain)
{
    std::cout << "[DEBUG] Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat& other)
    : Animal(other)
{
    std::cout << "[DEBUG] Cat copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}

Cat::~Cat()
{
    std::cout << "[DEBUG] Cat destructor called" << std::endl;
    delete _brain;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "[DEBUG] Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
        *_brain = *other._brain;
    }
    return *this;
}

Brain* Cat::getBrain() const
{
    return _brain;
}

void Cat::setBrain(Brain* const brain)
{
    _brain = brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
