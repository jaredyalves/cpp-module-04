#include "WrongCat.hpp"

#include <iostream>

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
        _type = other._type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
