#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define IDEAS_MAX 100

class Brain
{
public:
    std::string ideas[IDEAS_MAX];

    Brain();
    Brain(const Brain& other);

    ~Brain();

    Brain& operator=(const Brain& other);
};

#endif //BRAIN_HPP
