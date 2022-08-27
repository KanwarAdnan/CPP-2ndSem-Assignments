/*

    Write a program that reads its own file (the code file that you are working upon) and prints it on screen.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file;
    string line;
    file.open("main.cpp");

    while(getline(file,line)){
        cout << line << endl;
    }
}

