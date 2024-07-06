#include "Brain.hpp"

#include <iostream>

std::string Brain::getIdea(const int idx) const
{
    std::cout << "[DEBUG] Brain getIdea() member function called" << std::endl;
    if (idx < 0 || idx >= IDEAS_MAX)
        return "";
    return _ideas[idx];
}

void Brain::setIdea(const int idx, const std::string& idea)
{
    std::cout << "[DEBUG] Brain setIdea() member function called" << std::endl;
    if (idx >= 0 && idx < IDEAS_MAX)
        _ideas[idx] = idea;
}

Brain::Brain()
{
    std::cout << "[DEBUG] Brain default constructor called" << std::endl;
    for (int i = 0; i < IDEAS_MAX; ++i)
        _ideas[i] = "";
}

Brain::Brain(const Brain& other)
{
    std::cout << "[DEBUG] Brain copy constructor called" << std::endl;
    for (int i = 0; i < IDEAS_MAX; ++i)
        _ideas[i] = other._ideas[i];
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
            _ideas[i] = other._ideas[i];
    }
    return *this;
}
