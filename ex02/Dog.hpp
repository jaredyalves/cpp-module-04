#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& other);

    ~Dog();

    Dog& operator=(const Dog& other);

    Brain* getBrain() const;
    void   setBrain(Brain* brain);

    void makeSound() const;

private:
    Brain* _brain;
};

#endif //DOG_HPP
