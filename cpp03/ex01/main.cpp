#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("Robot");
    c.attack("Paçoquita");
    ScavTrap a("Milo");
    a.attack("Milo");
    ScavTrap b = a;
    b.attack("Moon");
    ScavTrap d(c);
    d.beRepaired(1);
    return (0);
}
