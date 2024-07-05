#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);

    virtual ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& other);

    std::string getType() const;
    void        setType(const std::string& type);

    void makeSound() const;

protected:
    std::string _type;
};

#endif //WRONGANIMAL_HPP
