#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    void makeSound() const;

    std::string getIdea(int idx) const;
    void        setIdea(int idx, const std::string& idea) const;

    Dog();
    Dog(const Dog& other);
    ~Dog();

    Dog& operator=(const Dog& other);

private:
    Brain* _brain;
};

#endif
