#include "Dog.hpp"

#include <iostream>

void Dog::makeSound() const
{
    std::cout << "[DEBUG] Dog makeSound() member function called" << std::endl;
    std::cout << "Woof" << std::endl;
}

std::string Dog::getIdea(const int idx) const
{
    return _brain->getIdea(idx);
}

void Dog::setIdea(const int idx, const std::string& idea) const
{
    _brain->setIdea(idx, idea);
}

Dog::Dog()
    : _brain(new Brain())
{
    std::cout << "[DEBUG] Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog& other)
    : AAnimal(other),
      _brain(new Brain(*other._brain))
{
    std::cout << "[DEBUG] Dog copy constructor called" << std::endl;
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
        AAnimal::operator=(other);
        *_brain = *other._brain;
    }
    return *this;
}
