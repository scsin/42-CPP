#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("Robot");
    c.attack("Paçoquita");
    ClapTrap a("Milo");
    a.attack("Milo");
    ClapTrap b = a;
    b.attack("Moon");
    ClapTrap d(c);
    d.beRepaired(1);
    return (0);
}
