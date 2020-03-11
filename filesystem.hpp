#include <iostream>
using namespace std;

void printDir(string dir){
    cout << dir << endl;
}

std::string cd(string dir){
    string currentDir = "/" + dir;
    return currentDir;
}