#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* a = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    const WrongAnimal* wa = new WrongCat();

    std::cout << std::endl;
    std::cout << d->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;

    std::cout << std::endl;
    d->makeSound();
    c->makeSound(); //will output the cat sound!
    a->makeSound();
    wa->makeSound();

    return 0;
}
