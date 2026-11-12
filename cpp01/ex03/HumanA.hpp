#include "Weapon.hpp"

#ifndef HUMANA_H
#define HUMANA_H

class HumanA
{
  std::string name;
  Weapon  &weapon;

  public:
    void  attack();

  HumanA(std::string nickname, Weapon &equipment);
};

#endif
