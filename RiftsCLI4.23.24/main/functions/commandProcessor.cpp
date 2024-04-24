#include <iostream>

void cmdProcessor(std::string input) {
    
    if (input == "north") {
        mapMovement(input, &main::coordinates[0], &main::coordinates[2]);
    }
    else if (input == "south") {
        mapMovement(input &main::coordinates[0], &main::coordinates[2]);
    }
    else {
        std::cout << "cmdProcessor says: invalid cmd\n\n";
    }

}