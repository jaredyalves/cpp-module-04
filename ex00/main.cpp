#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void print_type(const Animal* animal)
{
    std::cout << "Type: " << animal->getType() << std::endl;
}

void print_sound(const Animal* animal)
{
    std::cout << "Sound: ";
    animal->makeSound();
}

void print_wrong_sound(const WrongAnimal* wrong_animal)
{
    std::cout << "Sound: ";
    wrong_animal->makeSound();
}

int main()
{
    {
        std::cout << "[TEST] Initializing with Animal sets the type to Unknown" << std::endl;
        const Animal animal;
        print_type(&animal);
    }
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
    std::cout << std::endl;
    {
        std::cout << "[TEST] Animal's sound should output 'Unknown'" << std::endl;
        const Animal animal;
        print_sound(&animal);
    }
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
    {
        std::cout << "[TEST] WrongAnimal's sound should output 'Unknown'" << std::endl;
        const WrongAnimal wrong_animal;
        print_wrong_sound(&wrong_animal);
    }
    std::cout << std::endl;
    {
        std::cout << "[TEST] WrongCat's sound should output 'Unknown'" << std::endl;
        const WrongCat wrong_animal;
        print_wrong_sound(&wrong_animal);
    }
    std::cout << std::endl;
}
