#include "Ice.hpp"

#include <iostream>

#include "ICharacter.hpp"

AMateria* Ice::clone() const
{
    std::cout << "[DEBUG] Ice clone() member function called" << std::endl;
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "[DEBUG] Ice use() member function called" << std::endl;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice()
    : AMateria("ice")
{
    std::cout << "[DEBUG] Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other)
    : AMateria(other)
{
    std::cout << "[DEBUG] Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "[DEBUG] Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "[DEBUG] Ice copy assignment operator called" << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}
