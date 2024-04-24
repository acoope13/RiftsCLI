#include <iostream>
#include<cstdlib>

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
int roll(int times, int sides);
int attrInit();
int ispInit(int psiVal, int me);
int hpInit(int pe);


int main(){
    
// works
    srand(time(0));
    int attribute[8];
    std::string attributeName[8] = 
      {"Intelligence Quotient", "Mental Endurance", "Mental Affinity", "Physical Strength", "Physical Prowess", "Physical Endurance", "Physical Beauty", "Speed"};

    
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
    int isp = ispInit(psionicValue, attribute[1]);
    std::cout << "\nISP: " << isp << std::endl;
    
    int hp = hpInit(attribute[5]);
    std::cout << "HP: " << hp;
    return 0;
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
