#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    d->makeSound();
    c->makeSound();
    //delete j;//should not create a leak
    //delete i;

    return 0;
}
