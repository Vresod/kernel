#include <iostream>
#include "cli.hpp"

using namespace std;

int main(){
    while (true){
        string command;
        cout << "> ";
        cin >> command;
        if (command == "delete"){
            string file;
            cout << "Enter file: ";
            cin >> file;
            del(file);
        }
    }
    return 0;
}