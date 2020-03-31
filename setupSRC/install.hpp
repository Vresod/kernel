/*********
Copyright (c) 2020 AVCADO All Rights Reserved.
*********/

// Normal (standard) imports
#include <iostream> // iostream
#include <stdlib.h> // stdlib
#include <windows.h> // Sleep()
#include <cmath> // cmath
#include <math> // math

// Constants
#define USERS[] // users array..? (if this doesn't work /shrug)
#define DIR_TO_PLACE "C:\\Windoge" // Set the directory
#define KEY_CORRECT_2 "756-291" // No explanation needed
#define KEY_CORRECT_1 "483-062" // I do not care if this is
// unsecure, it just helps me to do what I need to do...

// move files class
class moveFiles {
public:
  // Public modifier.
  std::string dir = DIR_TO_PLACE; // changable.
  // this function gets the PRIVILIGES of the user (not needed)
  int privs(){
    int stausCode = 0; // Default

    // Placeholder code: 1.
    if (true){
      Sleep(69);
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
      std::string lines[];
      for (int i = 0; i < 9999; i++){
        while (std::getline(key, line)) {
          // std::cout << line << '\n';
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
                std::cout << "Correct";
                j = -1; // You'll see why in a minute
                break;
              case "756-291":
                std::cout << "Your key is correct." << '\n';
                j = -1;
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
  // This function reads the account details
  // in the file "UserDetails.txt".
  void readAccounts(){
    std::ifstream usr("UserDetails.txt", std::ios::in);
    if (usr.is_open()) {
      std::string line;
      std::string lines[]; // Make an array
      for (int i = 0; i < 900; i++){
        while (std::getline(usr, line)) {
          // std::cout << line << '\n';
          lines[i] = line; // Line 1 = lines[1], etc.

          // Let's create strings for the lines.
          std::string user = lines[1];
          std::string pass = lines[2];
          std::string perm = lines[3];
          switch (user) {
            case "root":
              std::cout << "Incorrect name" << std::endl;
              break;
            case "\\":
              std::cout << "Incorrect name" << std::endl;
              break;
            default:
              // TODO: New code
              break;
          }
        }
      }
      usr.close();
    }
    else {
      std::cerr << "Unable to open file\n";
    }
  }
  // The actual installer
  void installIt(){

  }
};

class msg {
public:
  std::string message() {
    std::string choice;
    while(true){
      std::cout << "Welcome to Windoge installer." << '\n';
      std::cout << "Do you want to install Windoge? (Y/N) ";
      std::cin >> choice;
      if (choice == "Y"){
        install::installIt(); // Run installer.
        break;
      } else if (choice == "N") {
        std::cout << "I respect your opinion" << '\n';
        break;
      } else {
        continue;
      }
    }
  }
};


class status {
// public modifier.
public:
  std::string status = "";
  int percentage = 0;
  void changePercent(){
    percentage++; // Easy.
  }
};
