#include "Weapon.hpp"

#ifndef HUMANB_H
#define HUMANB_H

class HumanB
{
  std::string name;
  Weapon  *weapon;

  public:
    void  attack();
    void  setWeapon(Weapon *equipment);

  HumanB(std::string nickname);
};

#endif
