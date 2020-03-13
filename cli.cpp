#include <iostream>
#include "cli.hpp"
#include "changeDirectory.hpp"

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
        } else if (command == "help"){
            help();
        } else if (command == "cd"){
            string directory;
            cout << "Enter directory you want to go to: ";
            cin >> directory;
            while (true){
                string command;
                cout << changeDir(directory) + ">";
                cin >> command;
            }
            if (directory == "" || directory == " "){
                cout << "Unknown dir";
            }
        } else {
            cout << "Incorrect command" << endl;
        }
    }
    return 0;
}