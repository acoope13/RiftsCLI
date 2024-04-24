#include <iostream>
#include "CharClass.hpp"

void riftLogo();
void restoreSave();
void charCreation();

int main() {
  //variable declaration

  riftLogo();
  restoreSave();

  return 0;
}

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
void restoreSave(){
    std::string userInput;

  std::cout << "Enter 'continue' to load a previous game. "
            << "Otherwise, enter 'new' to start a new game." << std::endl;
  while (1 == 1) {
    std::cout << ">";
    std::cin >> userInput;

    if (userInput == "new") {
      break;
    }
    else if (userInput == "continue") {
      // print list of available save files
      //load save.dat file
      break;
    }
    else {
      std::cout << "Invalid command.\n\n";
    }
  } 
}
void charCreation(){
  CharClass newChar;
  
}