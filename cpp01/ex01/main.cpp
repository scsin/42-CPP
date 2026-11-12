#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie  *zombies = zombieHorde(ZOMBIE_QT, "Zombie");
    for (int i = 0; i < ZOMBIE_QT; i++)
    {
        std::cout << "\n";
        std::cout << zombies[i].name << " horde: " << zombies[i].name << i << "\n";
        zombies[i].announce();
    }
    delete[] zombies;
}
