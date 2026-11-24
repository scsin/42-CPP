#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animals[5];
	for (int i = 0; i < 5; i++) {
		const Animal* a; // prints Animal constructor called
		if (i < 2)
		{
			a = new Dog(); // prints Brain + Dog constructor called
			animals[i] = a; // should also print Animal copy assignment called?
		}
		else
		{
			a = new Cat(); // prints Brain + Cat constructor called
			animals[i] = a; // should also print Animal copy assignment called?
		}
		std::cout << a << std::endl; // prints an address
	}

	for (int p = 0; p < 5; p++) {
		std::cout << std::endl;
		delete animals[p]; // prints Brain destructor called + should not create a leak
	}
	return 0;
}
