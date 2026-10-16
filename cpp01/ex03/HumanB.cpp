#include "HumanB.hpp"

HumanB::HumanB(std::string nickname)
    : name(nickname), weapon(nullptr)
{
}

void  HumanB::attack()
{
  if (weapon == nullptr)
    return ;
  std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void  HumanB::setWeapon(Weapon *equipment)
{
  weapon = equipment;
}
