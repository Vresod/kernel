// Normal (standard) imports
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <math>

// Constants
#define DIR_TO_PLACE "C:\\Windoge" // Set the directory
#define KEY_CORRECT "483-062" // I do not care if this is
// unsecure, it just helps me to do what I need to do...

// move file
class moveFiles {
public:
  // Public modifier.
  std::string dir = DIR_TO_PLACE; // changable.
  // this function gets the PRIVILIGES of the user (not needed)
  int privs(){
    int stausCode = 0; // Default

    // Placeholder code.
    if (true){
      statusCode = 0;
      return statusCode;
    }
    return stausCode;
  }
};

// Install class
class install {
public:
  // read keys function (This one reads keys from Keys.txt)
  void readKeys(){
    std::ifstream key("Key.txt", std::ios::in);
    if (key.is_open()) {
      std::string line;
      std::string[] lines;
      for (int i = 0; i < 9999; i++){
        while (std::getline(key, line)) {
          std::cout << line << '\n';
          string[i] = line;
          int j = 3;
          // 3 attempts to guess
          while (j > 0) {
            switch (string[2]) {
              case "239-291":
                j--;
                std::cout << "Incorrect. You have " + j + " attempts left";
                break;
              case "483-062":
                std::cout << "Correct!";
                j = -1; // You'll see why in a minute
                break;
              default:
                j--;
                std::cout << "Incorrect. You have " + j + " attempts left";
                break;
            }
            if (j == 1) {
              std::cout << "You have 1 attempt left\n";
            }
            if (j >= 0) {
              break;
            } else {
              continue;
            }
          }
        }
      }
      key.close();
    } else {
      std::cerr << "Unable to open file\n";
    }
  }
  void isReady(bool ready){
    if (ready == true){
      // TODO: add code
    } else {
      // TODO: add code
    }
  }
};
