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