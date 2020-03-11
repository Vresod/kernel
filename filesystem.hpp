#include <iostream>
using namespace std;


void printDir(string dir){
    cout << dir << endl;
}

void cd(string dir){
    string currentDir = "/" + dir;
    cout << currentDir;
}