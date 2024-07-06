#include "Cat.hpp"

#include <iostream>

void Cat::makeSound() const
{
    std::cout << "[DEBUG] Cat makeSound() member function called" << std::endl;
    std::cout << "Meow" << std::endl;
}

std::string Cat::getIdea(const int idx) const
{
    return _brain->getIdea(idx);
}

void Cat::setIdea(const int idx, const std::string& idea) const
{
    _brain->setIdea(idx, idea);
}

Cat::Cat()
    : _brain(new Brain())
{
    std::cout << "[DEBUG] Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat& other)
    : AAnimal(other),
      _brain(new Brain(*other._brain))
{
    std::cout << "[DEBUG] Cat copy constructor called" << std::endl;
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
        AAnimal::operator=(other);
        *_brain = *other._brain;
    }
    return *this;
}
