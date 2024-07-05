#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& other);

    ~Cat();

    Cat& operator=(const Cat& other);

    Brain* getBrain() const;
    void   setBrain(Brain* brain);

    void makeSound() const;

private:
    Brain* _brain;
};

#endif //CAT_HPP
