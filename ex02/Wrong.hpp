#ifndef WRONG_HPP
#define WRONG_HPP

#include <string>

class WrongAnimal
{
public:
    void makeSound() const;

    std::string getType() const;
    void        setType(const std::string& type);

    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& other);

protected:
    std::string _type;
};

class WrongCat : public WrongAnimal
{
public:
    void makeSound() const;

    WrongCat();
    WrongCat(const WrongCat& other);
    ~WrongCat();

    WrongCat& operator=(const WrongCat& other);
};

#endif
