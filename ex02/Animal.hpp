#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
    Animal();
    Animal(const Animal& other);

public:
    virtual ~Animal();

    Animal& operator=(const Animal& other);

    std::string getType() const;
    void        setType(const std::string& type);

    virtual void makeSound() const;

protected:
    std::string _type;
};

#endif //ANIMAL_HPP
