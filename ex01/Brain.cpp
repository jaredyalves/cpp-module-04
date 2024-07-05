#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
    std::cout << "[DEBUG] Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "[DEBUG] Brain copy constructor called" << std::endl;
    for (int i = 0; i < IDEAS_MAX; ++i)
    {
        ideas[i] = other.ideas[i];
    }
}

Brain::~Brain()
{
    std::cout << "[DEBUG] Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "[DEBUG] Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < IDEAS_MAX; ++i)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}
