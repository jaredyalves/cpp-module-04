#include "Cure.hpp"

#include <iostream>

#include "ICharacter.hpp"

AMateria* Cure::clone() const
{
    std::cout << "[DEBUG] Cure clone() member function called" << std::endl;
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "[DEBUG] Cure use() member function called" << std::endl;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure()
    : AMateria("cure")
{
    std::cout << "[DEBUG] Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other)
    : AMateria(other)
{
    std::cout << "[DEBUG] Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "[DEBUG] Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "[DEBUG] Cure copy assignment operator called" << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}
