#include "Wrong.hpp"

#include <iostream>

void WrongAnimal::makeSound() const
{
    std::cout << "[DEBUG] WrongAnimal makeSound() member function called" << std::endl;
    std::cout << "Unknown" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "[DEBUG] WrongAnimal getType() member function called" << std::endl;
    return _type;
}

void WrongAnimal::setType(const std::string& type)
{
    std::cout << "[DEBUG] WrongAnimal setType() member function called" << std::endl;
    _type = type;
}

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

void WrongCat::makeSound() const
{
    std::cout << "[DEBUG] WrongCat makeSound() member function called" << std::endl;
    std::cout << "Meow" << std::endl;
}

WrongCat::WrongCat()
{
    std::cout << "[DEBUG] WrongCat default constructor called" << std::endl;
    _type = "Cat";
}

WrongCat::WrongCat(const WrongCat& other)
    : WrongAnimal(other)
{
    std::cout << "[DEBUG] WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "[DEBUG] WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "[DEBUG] WrongCat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}
