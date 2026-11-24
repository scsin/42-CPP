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
			animals[i] = a;
		}
		else
		{
			a = new Cat(); // prints Brain + Cat constructor called
			animals[i] = a;
		}
		std::cout << a << std::endl; // prints an address
	}

	/* Brain copy assignment: in order to work update brain attribute inside class Dog to public */
	/*Dog a = Dog("Dof");
	a.brain->ideas[0] = "A";
	a.brain->ideas[1] = "B";
	a.brain->ideas[2] = "C";
	a.brain->ideas[19] = "T";
	Dog b;
	b = a;
	std::cout << "HERE " << a.brain << std::endl;
	std::cout << "HERE " << a.brain->ideas[0] << std::endl;
	std::cout << "HERE " << a.brain->ideas[1] << std::endl;
	std::cout << "HERE " << a.brain->ideas[2] << std::endl;
	std::cout << "HERE " << a.brain->ideas[3] << std::endl;
	std::cout << "HERE " << a.brain->ideas[19] << std::endl;
	std::cout << "HERE " << b.brain << std::endl;
	std::cout << "HERE " << b.brain->ideas[0] << std::endl;
	std::cout << "HERE " << b.brain->ideas[1] << std::endl;
	std::cout << "HERE " << b.brain->ideas[2] << std::endl;
	std::cout << "HERE " << b.brain->ideas[3] << std::endl;
	std::cout << "HERE " << b.brain->ideas[19] << std::endl;*/

	for (int p = 0; p < 5; p++) {
		std::cout << std::endl;
		delete animals[p]; // prints Brain destructor called + should not create a leak
	}
	return 0;
}
