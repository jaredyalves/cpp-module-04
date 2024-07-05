#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void print_type(const Animal* animal)
{
    std::cout << "Type: " << animal->getType() << std::endl;
}

void print_sound(const Animal* animal)
{
    std::cout << "Sound: ";
    animal->makeSound();
}

int main()
{
    // {
    //     std::cout << "[TEST] Initializing with Animal sets the type to Unknown" << std::endl;
    //     const Animal animal;
    //     print_type(&animal);
    // }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Initializing with Dog sets the type to Dog" << std::endl;
        const Dog animal;
        print_type(&animal);
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Initializing with Cat sets the type to Cat" << std::endl;
        const Cat animal;
        print_type(&animal);
    }
    // std::cout << std::endl;
    // {
    //     std::cout << "[TEST] Animal's sound should output 'Unknown'" << std::endl;
    //     const Animal animal;
    //     print_sound(&animal);
    // }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Dog's sound should output 'Bark'" << std::endl;
        const Dog animal;
        print_sound(&animal);
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Cat's sound should output 'Meow'" << std::endl;
        const Cat animal;
        print_sound(&animal);
    }
    std::cout << std::endl;

    // Brain tests
    {
        std::cout << "[TEST] Dog can have 10 ideas" << std::endl;
        const Dog animal;
        for (int i = 0; i < 10; ++i)
        {
            animal.getBrain()->ideas[i] = "This is an idea of the Dog";
        }
        for (int i = 0; i < 10; ++i)
        {
            std::cout << animal.getBrain()->ideas[i] << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Cat can have 10 ideas" << std::endl;
        const Cat animal;
        for (int i = 0; i < 10; ++i)
        {
            animal.getBrain()->ideas[i] = "This is an idea of the Cat";
        }
        for (int i = 0; i < 10; ++i)
        {
            std::cout << animal.getBrain()->ideas[i] << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Can create copy of Dog that holds a different memory address" << std::endl;
        const Dog a1;
        const Dog a2 = a1;
        std::cout << "Dog 1 brain: " << a1.getBrain() << std::endl;
        std::cout << "Dog 2 brain: " << a2.getBrain() << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Can create heap copies and delete both without leaks or errors" << std::endl;
        const Dog* a1 = new Dog();
        const Dog* a2 = new Dog(*a1);
        std::cout << "Dog 1 brain: " << a1->getBrain() << std::endl;
        std::cout << "Dog 2 brain: " << a2->getBrain() << std::endl;
        delete a1;
        delete a2;
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] Can create an array of Animals with Dogs and Cats without leaks" << std::endl;
        Animal* animals[4];
        animals[0] = new Dog;
        animals[1] = new Dog;
        animals[2] = new Cat;
        animals[3] = new Cat;
        for (int i = 0; i < 4; ++i)
        {
            print_sound(animals[i]);
        }
        for (int i = 0; i < 4; ++i)
        {
            delete animals[i];
        }
    }
    std::cout << std::endl;
}
