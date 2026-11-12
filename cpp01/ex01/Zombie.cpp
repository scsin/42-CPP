#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce( void ) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

Zombie  create_zombie(std::string name)
{
    Zombie  zombie;
    zombie.name = name;
    return (zombie);
}
