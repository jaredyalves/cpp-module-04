#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
