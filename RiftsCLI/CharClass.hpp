#ifndef CHARCLASS_HPP
#define CHARCLASS_HPP

#include <iostream>

class CharClass {
public:
  std::string className;
  std::string classRace;
  
  //attributes
  int strength, agility, constitution;
  int intelligence, perception;

  //derived attr
  int hitPoints, speed, armorRating;
  int damagePotential, megaDamageCapacity;

  //room for skills, powers/abilities, bonuses/penalties
  // background & descriptions


};

#endif