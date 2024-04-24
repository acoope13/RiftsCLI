/*#define MAPSYSTEM_HPP

#include <iostream>
#include <vector>

class Map {
public:
    std::vector<std::vector<int>> grid;
    short startingPosition[2];
};


#endif
*/
//comment disable this and put in anotber file

#include <iostream>
#include <vector>

void mapMovement(std::string input, short* x, short* y);

int main(){
    
    //char current position
    short coordinates[2] = {0, 0};
    std::string input;
    
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
    
    return 0;
}

void mapMovement(std::string input, short* x, short* y) {
    if (input == "move north") {
        *y += 1;
    }
    else if (input == "move east"){
        *x += 1;
    }
    else if (input == "move south"){
        *y -= 1;
    }
    else if (input == "move west"){
        *x -= 1;
    }
    else {
        std::cout << "invalid command" << std::endl;
    }
}