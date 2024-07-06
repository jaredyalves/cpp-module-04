#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:
    virtual void makeSound() const;

    std::string getType() const;
    void        setType(const std::string& type);

    Animal();
    Animal(const Animal& other);
    virtual ~Animal();

    Animal& operator=(const Animal& other);

protected:
    std::string _type;
};

#endif
