#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define INVENTORY_MAX 4

class Character : public ICharacter
{
public:
    const std::string& getName() const;
    void               equip(AMateria* m);
    void               unequip(int idx);
    void               use(int idx, ICharacter& target);

    Character();
    explicit Character(const std::string& name);
    Character(const Character& other);
    ~Character();

    Character& operator=(const Character& other);

private:
    std::string _name;
    AMateria*   _inventory[INVENTORY_MAX];
};

#endif
