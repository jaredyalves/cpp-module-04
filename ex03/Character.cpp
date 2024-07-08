#include "Character.hpp"

#include <iostream>

#include "AMateria.hpp"

const std::string& Character::getName() const
{
    std::cout << "[DEBUG] Character getName() member function called" << std::endl;
    return _name;
}

void Character::setName(const std::string& name)
{
    std::cout << "[DEBUG] Character setName() member function called" << std::endl;
    _name = name;
}

void Character::equip(AMateria* m)
{
    std::cout << "[DEBUG] Character equip() member function called" << std::endl;
    for (int i = 0; i < INVENTORY_MAX; ++i)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(const int idx)
{
    std::cout << "[DEBUG] Character unequip() member function called" << std::endl;
    if (idx >= 0 && idx < INVENTORY_MAX)
    {
        discardMateria(_inventory[idx]);
        _inventory[idx] = NULL;
    }
}

void Character::use(const int idx, ICharacter& target)
{
    std::cout << "[DEBUG] Character use() member function called" << std::endl;
    if (idx >= 0 && idx < INVENTORY_MAX)
        _inventory[idx]->use(target);
}

Character::Character()
    : _name("unknown"),
      _inventory(),
      _discarded(NULL),
      _discard_count(0),
      _discard_capacity(0)
{
    std::cout << "[DEBUG] Character default constructor called" << std::endl;
    for (int i = 0; i < INVENTORY_MAX; ++i)
        _inventory[i] = NULL;
}

Character::Character(const std::string& name)
    : _name(name),
      _inventory(),
      _discarded(NULL),
      _discard_count(0),
      _discard_capacity(0)
{
    std::cout << "[DEBUG] Character param constructor called" << std::endl;
    for (int i = 0; i < INVENTORY_MAX; ++i)
        _inventory[i] = NULL;
}

Character::Character(const Character& other)
    : _inventory(),
      _discarded(NULL),
      _discard_count(0),
      _discard_capacity(0)
{
    std::cout << "[DEBUG] Character copy constructor called" << std::endl;
    for (int i = 0; i < INVENTORY_MAX; ++i)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character::~Character()
{
    std::cout << "[DEBUG] Character destructor called" << std::endl;
    for (int i = 0; i < INVENTORY_MAX; ++i)
    {
        delete _inventory[i];
        _inventory[i] = NULL;
    }

    for (int i = 0; i < _discard_count; ++i)
    {
        delete _discarded[i];
        _discarded[i] = NULL;
    }
    delete[] _discarded;
    _discarded = NULL;

    _discard_count = 0;
    _discard_capacity = 0;
}

Character& Character::operator=(const Character& other)
{
    std::cout << "[DEBUG] Character copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < INVENTORY_MAX; ++i)
            delete _inventory[i];
        for (int i = 0; i < INVENTORY_MAX; ++i)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

void Character::discardMateria(AMateria* m)
{
    std::cout << "[DEBUG] Character discardMateria() member function called" << std::endl;
    if (_discard_count >= _discard_capacity)
    {
        const int  capacity = (_discard_capacity == 0) ? 1 : _discard_capacity * 2;
        AMateria** discarded = new AMateria*[capacity];

        for (int i = 0; i < _discard_count; ++i)
            discarded[i] = _discarded[i];
        delete[] _discarded;

        _discarded = discarded;
        _discard_capacity = capacity;
    }
    _discarded[_discard_count++] = m;
}
