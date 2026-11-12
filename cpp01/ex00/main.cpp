#include "Zombie.hpp"
#include <iostream>

int	main()
{
	// heap
	Zombie *zombie = newZombie("Foo");
	zombie->announce();

	delete zombie;

	std::cout << "\n";

	// stack
	randomChump("Random");

	return (0);
}
