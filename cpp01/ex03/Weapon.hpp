#include <iostream>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
  std::string type;

  public:
    const std::string getType();
    void  setType(std::string newType);

  Weapon(std::string club);
};

#endif
