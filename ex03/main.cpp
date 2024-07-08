#include <iostream>

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    // AMateria tests
    // {
    //     std::cout << std::endl << "[TEST] AMateria can be initialized normally" << std::endl;
    //
    //     const AMateria materia;
    //     std::cout << materia.getType() << std::endl;
    // }
    {
        std::cout << std::endl << "[TEST] AMateria can be assigned to another without changing the type" << std::endl;

        const AMateria* cure = new Cure();
        AMateria*       ice = new Ice();
        *ice = *cure;
        std::cout << ice->getType() << std::endl;
        delete cure;
        delete ice;
    }

    // Ice tests
    {
        std::cout << std::endl << "[TEST] Ice materia can be initialized normally on the stack" << std::endl;

        const Ice ice;
        (void)ice;
    }
    {
        std::cout << std::endl << "[TEST] Ice materia can be initialized normally on the heap" << std::endl;

        const Ice* ice = new Ice();
        delete ice;
    }
    {
        std::cout << std::endl << "[TEST] Ice materia can be copied when constructing" << std::endl;

        const Ice ice1;
        const Ice ice2(ice1);
        (void)ice2;
    }
    {
        std::cout << std::endl << "[TEST] Ice materia can be copied when assigning" << std::endl;

        const Ice ice1;
        Ice       ice2;
        ice2 = ice1;
        (void)ice2;
    }
    {
        std::cout << std::endl << "[TEST] Ice materia has a type `ice`" << std::endl;

        const Ice ice;
        std::cout << ice.getType() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Ice materia can be cloned" << std::endl;

        const AMateria* ice = new Ice();
        const AMateria* clone = ice->clone();
        std::cout << ice->getType() << std::endl;
        std::cout << clone->getType() << std::endl;
        std::cout << "Memory of ice: " << ice << std::endl;
        std::cout << "Memory of clone: " << clone << std::endl;
        delete ice;
        delete clone;
    }
    {
        std::cout << std::endl << "[TEST] Ice materia can be used" << std::endl;

        Ice       ice;
        Character bob("bob");
        ice.use(bob);
    }

    // Cure tests
    {
        std::cout << std::endl << "[TEST] Cure materia can be initialized normally on the stack" << std::endl;

        const Cure cure;
        (void)cure;
    }
    {
        std::cout << std::endl << "[TEST] Cure materia can be initialized normally on the heap" << std::endl;

        const Cure* cure = new Cure();
        delete cure;
    }
    {
        std::cout << std::endl << "[TEST] Cure materia can be copied when constructing" << std::endl;

        const Cure cure1;
        const Cure cure2(cure1);
        (void)cure2;
    }
    {
        std::cout << std::endl << "[TEST] Cure materia can be copied when assigning" << std::endl;

        const Cure cure1;
        Cure       cure2;
        cure2 = cure1;
        (void)cure2;
    }
    {
        std::cout << std::endl << "[TEST] Cure materia has a type `cure`" << std::endl;

        const Cure cure;
        std::cout << cure.getType() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Cure materia can be cloned" << std::endl;

        const AMateria* cure = new Cure();
        const AMateria* clone = cure->clone();
        std::cout << cure->getType() << std::endl;
        std::cout << clone->getType() << std::endl;
        std::cout << "Memory of cure: " << cure << std::endl;
        std::cout << "Memory of clone: " << clone << std::endl;
        delete cure;
        delete clone;
    }
    {
        std::cout << std::endl << "[TEST] Cure materia can be used" << std::endl;

        Cure      cure;
        Character bob("bob");
        cure.use(bob);
    }

    // Character tests
    {
        std::cout << std::endl << "[TEST] Character can be initialized normally on the stack" << std::endl;

        Character unknown;
        (void)unknown;
    }
    {
        std::cout << std::endl << "[TEST] Character can be initialized normally on the heap" << std::endl;

        ICharacter* unknown = new Character();
        delete unknown;
    }
    {
        std::cout << std::endl << "[TEST] Character using the default constructor have `unknown` name" << std::endl;

        Character unknown;
        std::cout << unknown.getName() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Character can be initialized with a name" << std::endl;

        Character bob("bob");
        std::cout << bob.getName() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Character can be set a name" << std::endl;

        Character bob;
        bob.setName("bob");
        std::cout << bob.getName() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Character can equip a materia" << std::endl;

        Character bob("bob");
        AMateria* ice = new Ice();
        bob.equip(ice->clone());
        delete ice;
    }
    {
        std::cout << std::endl << "[TEST] Character can equip up to 4 materias" << std::endl;

        Character bob("bob");
        AMateria* ice = new Ice();
        for (int i = 0; i < INVENTORY_MAX; ++i)
            bob.equip(ice->clone());
        AMateria* cure = new Cure();
        bob.equip(cure);
        delete ice;
        delete cure;
    }
    {
        std::cout << std::endl << "[TEST] Character can unequip a materia" << std::endl;

        Character bob("bob");
        AMateria* ice = new Ice();
        bob.equip(ice->clone());
        bob.unequip(0);
        delete ice;
    }
    {
        std::cout << std::endl << "[TEST] Character can use a materia from the inventory" << std::endl;

        Character bob("bob");
        AMateria* ice = new Ice();
        bob.equip(ice->clone());
        AMateria* cure = new Cure();
        bob.equip(cure->clone());
        Character john("john");
        bob.use(0, john);
        delete ice;
        delete cure;
    }
    {
        std::cout << std::endl << "[TEST] MateriaSource can be initialized on the stack" << std::endl;

        MateriaSource source;
        (void)source;
    }
    {
        std::cout << std::endl << "[TEST] MateriaSource can be initialized on the heap" << std::endl;

        IMateriaSource* source = new MateriaSource();
        delete source;
    }
    {
        std::cout << std::endl << "[TEST] MateriaSource can learn materias" << std::endl;

        IMateriaSource* source = new MateriaSource();
        source->learnMateria(new Ice());
        delete source;
    }
    {
        std::cout << std::endl << "[TEST] MateriaSource can learn up to 4 materias" << std::endl;

        IMateriaSource* source = new MateriaSource();
        for (int i = 0; i < SOURCES_MAX; ++i)
            source->learnMateria(new Ice());
        Ice* ice = new Ice();
        source->learnMateria(ice);
        delete ice;
        delete source;
    }

    // Subject test
    {
        std::cout << std::endl << "[TEST] Subject" << std::endl;

        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
    }
}
