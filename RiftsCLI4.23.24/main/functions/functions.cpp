#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../headers/rollHeader.h"
#include "../headers/init.h"

void riftLogo(){
    // main screen
  std::cout << "###################################################" << std::endl;
  std::cout << "#\t\t\t\t\t\t  #" << std::endl;
  std::cout << "#     ///////    //    ///////  ////////  //////  #" << std::endl;
  std::cout << "#    //   //    //    //          //     //       #" << std::endl;
  std::cout << "#   // ///     //    /////       //       ///     #" << std::endl;
  std::cout << "#  //   //    //    //          //          //    #" << std::endl;
  std::cout << "# //    //   //    //          //      //////     #" << std::endl;
  std::cout << "#\t\t\t\t\t\t  #" << std::endl;
  std::cout << "###################################################" << std::endl;
  std::cout << std::endl;

}
std::string restoreSave(){
    std::string userInput;
    std::cout << std::endl;
while (1 == 1){
  std::cout << "Enter 'continue' to load a previous game.\n"
            << "Otherwise, enter 'new' to start a new game." << std::endl;
    std::cout << ">";
    //std::cin >> userInput;
    getline(std::cin, userInput);

    if (userInput == "new") {

      return "new";
    }
    else if (userInput == "continue") {
      // print list of available save files
      //load save.dat file
      return "else";
    }
    else {
      std::cout << "Invalid command.\n\n";
    }
  } 
}

/// #############################
// roll function

//character and npc initialization


int psionicRoll();
/*
int* seeder(int times){
    int seed[times];
//    srand(time(0));
    for (int i = 0; i < times; i++){
        seed[i] = rand();
    }
    return seed;
} // end of seeder function
*/


void charCreation(int* attribute, std::string* attributeName, int* damageRating, std::string* damageRatingName){
    
// works

    for (int i = 0; i < 8; i++){
        attribute[i] = attrInit();
    }
    for (int i = 0; i < 8; i++){
        std::cout << attributeName[i] << ": ";
        std::cout << attribute[i] << std::endl;
    }
    
    //end of base attributes
    
    int psionicValue = psionicRoll();
    std::cout << psionicValue << " psi: ";
    if (psionicValue == 0){
    std::cout << "none";
    }
    else if (psionicValue == 1){
        std::cout << "minor";
    }
    else if (psionicValue == 2){
        std::cout << "major";
    }
    attribute[8] = ispInit(psionicValue, attribute[1]);
    std::cout << "\nISP: " << attribute[8] << std::endl;
    
    damageRating[0] = hpInit(attribute[5]);
    std::cout << damageRatingName[0] << ": " << damageRating[0];
    std::cout << "\n";
}


int roll(int times, int sides){
    //doesnt work
//    srand(time(0));
int rollTotal = 0;

//int* seed= seeder(times);
    // Using system time as a seed value
    for (int i = 0; i < times; i++){
//    srand(seed[i]);
    rollTotal += 1 +  (rand() % sides);
     }
     return rollTotal;
} // end of roll function

int attrInit(){
         // doesnt work
      //   srand(time(0));
         int attr = 0;
     attr += roll(3, 6);
     if (attr > 14){
        int hold = 0;
        hold += roll(1, 6);
        if (hold == 6){
            attr += hold;
            attr += roll(1, 6);
        }
        else {
            attr += hold;
        }
     }
    // std::cout << attr << std::endl;

    return attr;
} // end of attrInit function

int psionicRoll() {
    int rollValue = roll(1, 100);
    
    std::cout << rollValue << std::endl;
    
    if (rollValue <= 10){
        return 2;
    }
    else if (rollValue <= 25) {
        return 1;
    }
    else {
        return 0;
    }
    
}

int ispInit(int psiVal, int me){
    if (psiVal == 2){
        //major, + 1d6/lvl
        return (me + roll(4, 6));
    }
    else if (psiVal == 1){
        return (me + roll(2, 6));
        //minor, +1d6/lvl
    }
    else {
        //none, no increase by lvlup
        return 0;
    }
}

int hpInit (int pe){
    return (pe + roll(1, 6));
}
/* programmers note: 

include srand at the start of the true main function

*/




bool atkInit() {
  int enemyRoll = 0;
  int playerRoll = 0;
  while (playerRoll == enemyRoll) {
    enemyRoll = roll(1, 20);
    playerRoll = roll(1, 20);

    std::cout << "enemy rolls: " << enemyRoll << std::endl;
    std::cout << "player rolls: " << playerRoll << std::endl;
  }

  if (enemyRoll > playerRoll){
    return 1;
  }
  else {
    return 0;
  }

}