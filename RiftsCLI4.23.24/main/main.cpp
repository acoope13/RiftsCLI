#include "./headers/init.h"
#include "./headers/rollHeader.h"
#include <iostream>
//#include <fstream>
//#include <vector>
#include <cstdlib>
//#include "CharClass.hpp"
//#include <string>

int main() {
  //variable declaration
    short coordinates[2];
    std::string input;
    std::string fileName;
    

    CharClass PlayerChar;

    srand(time(0));

    riftLogo();
    fileName = restoreSave();
    /*
        while (1==1){
    std::cout << ">";
    getline(std::cin, input);
//    std::cin >> input;
    std::cout << std::endl;
    
    if (input == "q") {
        break;
    }
    
    mapMovement(input, &coordinates[0], &coordinates[1]);
    
    std::cout << "New position: (" << coordinates[0] << ", " << coordinates[1] << ")";
    std::cout << std::endl;
    }
    */

       srand(time(0));

       if (fileName == "new") {
        for (int i = 0; i < 9; i++){
            PlayerChar.attribute[i] = 0; 
            PlayerChar.damageRating[i] = 0; 
        }
    //PlayerChar.attributeName[8] = {"Intelligence Quotient", "Mental Endurance", "Mental Affinity", "Physical Strength", "Physical Prowess", "Physical Endurance", "Physical Beauty", "Speed"};

    PlayerChar.passArray();
       }


   while (1==1) {
        std::cout << std::endl << ">";
        getline(std::cin, input);
        //cmdProcessor(input);


        //commands switches
        if (input == "quit") {
            break;
        }

        else if (input == "new game") {
            PlayerChar.passArray();
        }
        else if (input == "stats") {
                for (int i = 0; i < 9; i++) {
                    std::cout << PlayerChar.attributeName[i] << ": ";
                    std::cout << PlayerChar.attribute[i] << std::endl;
               }
                std::cout << PlayerChar.damageRatingName[0] << ": ";
                std::cout << PlayerChar.damageRating[0] << std::endl;
        }
        else if (input == "attack") {
            PlayerChar.combatTest();
        }
        else {
            std::cout << "Invalid command.\n";
        }
   }

  return 0;
}