#ifndef CHARCLASS_HPP
#define CHARCLASS_HPP

#include <iostream>

class CharClass {
public:
//static values?
  std::string className;
  std::string classRace;
  
  //attributes
  int strength, agility, constitution;
  int intelligence, perception;

  //derived attr
  int hpMax, speed, armorRating;
  int damagePotential, megaDamageCapacity;
  int hpCurrent;
  int psiValue;

  //room for skills, powers/abilities, bonuses/penalties
  // background & descriptions

    int xpCat, xpCurrent;
    int level;

};

#endif

//######################


#ifndef CHARCLASS_HPP
#define CHARCLASS_HPP

#include <iostream>

class CharClass {
public:
  std::string className;
  std::string classRace;
  
  //attributes
//    int strength, agility, constitution;
//  int intelligence, perception;
  int attribute[8];
  
  //can i define here?
  std::string attributeName[8];
      // = {"Intelligence Quotient", "Mental Endurance", "Mental Affinity", "Physical Strength", "Physical Prowess", "Physical Endurance", "Physical Beauty", "Speed"};

  //derived attr
  //Damage rating
  int hitPoints, armorRating;
  int damagePotential, megaDamageCapacity;
  int physicalSDC, armorSDC;

  //room for skills, powers/abilities, bonuses/penalties
  
  
  // background & descriptions


};

class Skill

class Item {
public:
    short itemID;
    
    
};

#endif