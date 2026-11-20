#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("Robot");
    c.attack("Paçoquita");
    ScavTrap a("Milo");
    a.attack("Milo");
    ScavTrap b = a;
    b.attack("Milo");
    ScavTrap d(c);
	d.takeDamage(5);
    d.beRepaired(1);
	d.guardGate();
    return (0);
}
