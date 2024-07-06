#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    void makeSound() const;

    std::string getIdea(int idx) const;
    void        setIdea(int idx, const std::string& idea) const;

    Cat();
    Cat(const Cat& other);
    ~Cat();

    Cat& operator=(const Cat& other);

private:
    Brain* _brain;
};

#endif
