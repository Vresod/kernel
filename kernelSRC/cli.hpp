#pragma once
#include <iostream>
#include <cstdio>

using namespace std;

void help() {
    cout << "Much help:" << endl;
    cout << "del [file]" << endl;
    cout << "cd" << endl;
    cout << "Much nice" << endl;
}

void del(string file){
    int status = remove(file.c_str());
    if (status != 0)
    {
        cout << "no, much failed";
    }
}