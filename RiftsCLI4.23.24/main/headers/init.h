#ifndef CHARCLASS_HPP
#define CHARCLASS_HPP
#include <string>
#include <iostream>

void cmdProcessor(std::string input);
void riftLogo();
std::string restoreSave();

void mapMovement(std::string input, short* x, short* y);



//roll function
int roll(int times, int sides);
int attrInit();
int ispInit(int psiVal, int me);
int hpInit(int pe);
int psionicRoll();
void charCreation(int* attribute, std::string* attributeName, int* damageRating, std::string* damageRatingName);
int sdcInit();

//combat functions
void combatTest();
void enemyGenerator();
bool atkInit();

//character class

class CharClass {
public:
  std::string className;
  std::string classRace;
  int currentLevel = 0;
  
  //attributes
//    int strength, agility, constitution;
//  int intelligence, perception;
  int attribute[9];
  int attributeCurrent[9];
  
  //can i define here?
  std::string attributeName[9] = {"Intelligence Quotient", "Mental Endurance", "Mental Affinity", "Physical Strength", "Physical Prowess", "Physical Endurance", "Physical Beauty", "Speed", "ISP"};

  //derived attr
  //Damage rating
  int damageRating[6];
  int damageRatingCurrent[6];
  std::string damageRatingName[6] = { "Hit Points", "Armor Rating", "Damage Potential", "MDC", "SDC", "Armor SDC"};

  /*
  int hitPoints, armorRating;
  int damagePotential, megaDamageCapacity;
  int physicalSDC, armorSDC;
    */

  //room for skills, powers/abilities, bonuses/penalties
  
  
  // background & descriptions

    //charCreation function
    void passArray(){
        charCreation(attribute, attributeName, damageRating, damageRatingName);
    }
     void enemyGenerator(){
        charCreation(attribute, attributeName, damageRating, damageRatingName);
    }
    void combatTest(){
  CharClass Enemy;
  Enemy.enemyGenerator();
  std::cout << "Enemy encountered!\n\n";
  bool init = atkInit();
  
  if (init == 1) {
    std::cout << "Enemy attacks first!\n";
  }
  else {
    std::cout << "Player attacks first!\n";
  }

}

};


#endif