#include "p1.h"

// Ctor
Apple::Apple(){
    this-> id = ++this-> uid;
    cout << "I am Object Number : " << id << endl;
}

// Getter
int Apple::getId(){
    return this-> id;
}

// Assigning value to uid
int Apple::uid = 0;

// Driver Function
int main(){

    // Making 3 Objects
    Apple A1,A2,A3;

    return 0;
}