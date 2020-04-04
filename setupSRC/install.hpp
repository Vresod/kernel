/*********
Copyright (c) 2020 AVCADO All Rights Reserved.
*********/

// Normal (standard) imports
#include <iostream> // iostream
#include <stdio.h> // stdio
#include <stdlib.h> // stdlib
// #include <windows.h> Sleep()
#include <cmath> // cmath
#include <math> // math
#include <thread> // thread
#include <chrono> // for Sleep()

// Constants
#define USERS[] // users array..? (if this doesn't work /shrug)
#define WIN_DIR_TO_PLACE "C:\\Windoge" // Set the directory
#define MAC_DIR_TO_PLACE "/usr/bin/windoge" // probably very unethical
#define NIX_DIR_TO_PLACE MAC_DIR_TO_PLACE // same as MAC?
#define KEY_CORRECT_2 "756-291" // No explanation needed
#define KEY_CORRECT_1 "483-062" // I do not care if this is
// unsecure, it just helps me to do what I need to do...

// other public variables
int fileNum = 0; // Default.

// public arrays that I can't decide where to put
std::string statusMessages = [
  "Cleaning up", // End of install
  "Starting", // Begin the install
  "Moving " + file[fileNum], // Moving files
  "Removing temporary files" // Remove .tmp files/any excess files we don't need
];

std::string files = [
  "changeDirectory.hpp",
  "cli.cpp",
  "cli.hpp"
];

// move files class
class moveFiles {
public:
  // Public modifier.
  std::string dir = DIR_TO_PLACE; // changable.
  // this function moves files for windows
  void moveWin(){
    for (fileNum = 0; fileNum < files.length; fileNum++){
      std::string fileName = "kernel\\" + fileNum[i];
      const finalFileName = fileNum[i];
      rename(fileName, "C:\\Windoge\\kernel\\" + finalFileName);
      if (fileNum == files.length){
        break;
      } else {
        continue;
      }
    }
    install::installIt();
  }

  void moveMac(){
    for (fileNum = 0; fileNum < files.length; fileNum++){
	    std::string fileName = "kernel/" + fileNum[i];
	    const fileFileName = fileNum[i];
	    rename(fileName, "/usr/bin/kernel/" + fileNum[i]);
	    if (fileNUm == files.length){
		    break;
	    } else {
		    continue;
	    }
    }
    install::installIt();
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
    install::installIt();
  }
  // void isReady(bool ready){
  //   if (ready == true){
  //     // TODO: add code
  //   } else {
  //     // TODO: add code
  //   }
  // }
  // This function reads the account details
  // in the file "UserDetails.txt".
  // TODO: Come back to this function
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
              /w code
              break;
          }
        }
      }
      usr.close();
    }
    else {
      std::cerr << "Unable to open file\n";
    }
    install::installIt();
  }
  // The actual installer
  void installIt(){
    install::readKeys(); // First we read keys.
    std::chrono::milliseconds timespan(6000);
    std::this_thread::sleep_for(timespan);
    // Then, we move the files.
    moveFiles::moveWin();
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
