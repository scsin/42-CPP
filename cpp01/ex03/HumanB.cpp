#include "HumanB.hpp"

HumanB::HumanB(std::string nickname)
    : name(nickname), weapon(NULL)
{
}

void  HumanB::attack()
{
  if (weapon == NULL)
    return ;
  std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void  HumanB::setWeapon(Weapon *equipment)
{
  weapon = equipment;
}
