#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap e("Roberto");
    FragTrap c("Robot");
    c.attack("Paçoquita");
    ScavTrap a("Milo");
    a.attack("Milo");
    ScavTrap b = a;
    b.attack("Milo");
    FragTrap d(c);
	d.takeDamage(5);
    d.beRepaired(1);
    d.highFivesGuys();
    return (0);
}
