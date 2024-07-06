#include <iostream>

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong.hpp"

int main()
{
    // // Animal tests
    // {
    //     std::cout << std::endl << "[TEST] Class Animal can be initialized on the stack" << std::endl;
    //
    //     const AAnimal animal;
    //     (void)animal;
    // }
    // {
    //     std::cout << std::endl << "[TEST] Class Animal can be initialized on the heap" << std::endl;
    //
    //     const AAnimal* animal = new AAnimal;
    //     delete animal;
    // }
    // {
    //     std::cout << std::endl << "[TEST] Class Animal can be copied when constructing" << std::endl;
    //
    //     const AAnimal a1;
    //     const AAnimal a2 = a1;
    //     (void)a2;
    // }
    // {
    //     std::cout << std::endl << "[TEST] Class Animal can be copied when assigning" << std::endl;
    //
    //     const AAnimal a1;
    //     AAnimal       a2;
    //     a2 = a1;
    //     (void)a2;
    // }
    // {
    //     std::cout << std::endl << "[TEST] Class Animal has a defined type Unknown" << std::endl;
    //
    //     const AAnimal animal;
    //     std::cout << animal.getType() << std::endl;
    // }
    // {
    //     std::cout << std::endl << "[TEST] Class Animal makes a Unknown sound" << std::endl;
    //
    //     const AAnimal animal;
    //     animal.makeSound();
    // }

    // Dog tests
    {
        std::cout << std::endl << "[TEST] Class Dog can be initialized on the stack" << std::endl;

        const Dog dog;
        (void)dog;
    }
    {
        std::cout << std::endl << "[TEST] Class Dog can be initialized on the heap" << std::endl;

        const Dog* dog = new Dog;
        delete dog;
    }
    {
        std::cout << std::endl << "[TEST] Class Dog can be copied when constructing" << std::endl;

        const Dog d1;
        const Dog d2 = d1;
        (void)d2;
    }
    {
        std::cout << std::endl << "[TEST] Class Dog can be copied when assigning" << std::endl;

        const Dog d1;
        Dog       d2;
        d2 = d1;
        (void)d2;
    }
    {
        std::cout << std::endl << "[TEST] Class Dog has a defined type Dog" << std::endl;

        const Dog dog;
        std::cout << dog.getType() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Class Dog makes a Bark sound" << std::endl;

        const Dog dog;
        dog.makeSound();
    }

    // Cat tests
    {
        std::cout << std::endl << "[TEST] Class Cat can be initialized on the stack" << std::endl;

        const Cat cat;
        (void)cat;
    }
    {
        std::cout << std::endl << "[TEST] Class Cat can be initialized on the heap" << std::endl;

        const Cat* cat = new Cat;
        delete cat;
    }
    {
        std::cout << std::endl << "[TEST] Class Cat can be copied when constructing" << std::endl;

        const Cat c1;
        const Cat c2 = c1;
        (void)c2;
    }
    {
        std::cout << std::endl << "[TEST] Class Cat can be copied when assigning" << std::endl;

        const Cat c1;
        Cat       c2;
        c2 = c1;
        (void)c2;
    }
    {
        std::cout << std::endl << "[TEST] Class Cat has a defined type Cat" << std::endl;

        const Cat cat;
        std::cout << cat.getType() << std::endl;
    }
    {
        std::cout << std::endl << "[TEST] Class Cat makes a Meow sound" << std::endl;

        const Cat cat;
        cat.makeSound();
    }

    // Mixed tests
    {
        std::cout << std::endl << "[TEST] Class Dog and Class Cat can be used as a Class Animal" << std::endl;

        const AAnimal* dog = new Dog;
        const AAnimal* cat = new Cat;
        std::cout << dog->getType() << std::endl;
        std::cout << cat->getType() << std::endl;
        dog->makeSound();
        cat->makeSound();
        delete dog;
        delete cat;
    }

    // Wrong tests
    {
        std::cout << std::endl << "[TEST] Class WrongCat makes the sound of the Class WrongAnimal" << std::endl;

        const WrongAnimal* a = new WrongAnimal;
        const WrongAnimal* c = new WrongCat;
        std::cout << a->getType() << std::endl;
        std::cout << c->getType() << std::endl;
        a->makeSound();
        c->makeSound();
        delete a;
        delete c;
    }

    // Brain tests
    {
        std::cout << std::endl << "[TEST] Class Dog and Class Cat have a brain but used as Class Animal" << std::endl;

        const int max = 10;
        AAnimal*  animals[max];
        for (int i = 0; i < max / 2; ++i)
            animals[i] = new Dog();
        for (int i = max / 2; i < max; ++i)
            animals[i] = new Cat();
        for (int i = 0; i < max; ++i)
            animals[i]->makeSound();
        for (int i = 0; i < max; ++i)
            delete animals[i];
    }
    {
        std::cout << std::endl << "[TEST] Class Dog can have ideas in it's brain" << std::endl;

        Dog* dog = new Dog();
        dog->makeSound();
        dog->setIdea(0, "Fetch the ball");
        dog->setIdea(1, "Guard the house");
        dog->setIdea(2, "Dig a hole");
        std::cout << dog->getIdea(0) << std::endl;
        std::cout << dog->getIdea(1) << std::endl;
        std::cout << dog->getIdea(2) << std::endl;
        delete dog;
    }
    {
        std::cout << std::endl << "[TEST] Class Cat can have ideas in it's brain" << std::endl;

        Cat* cat = new Cat();
        cat->makeSound();
        cat->setIdea(0, "Chase mice");
        cat->setIdea(1, "Climb trees");
        cat->setIdea(2, "Take a nap");
        std::cout << cat->getIdea(0) << std::endl;
        std::cout << cat->getIdea(1) << std::endl;
        std::cout << cat->getIdea(2) << std::endl;
        delete cat;
    }
}
