#include "p3.h"

// Ctor, Creates an Array Dynamcially
SafeArray::SafeArray(int LIMIT){
    this-> LIMIT = LIMIT;
    if (this-> LIMIT > 0 ){
        ARR = new int(LIMIT);
        for(int i = 0 ; i < LIMIT ; i++){
            ARR[i] = 0;
        }
    }
}

// Index Validator
bool SafeArray::isIndex(int index){
    return ((index >= 0) && (index <LIMIT)) ? true:false;
}

// Inserts an element
void SafeArray::putEl(int index , int value){
    if (isIndex(index)){
        ARR[index] = value;
        return;
    }
    cout << "\nBad Index : " << index << endl;
}

// Returns an element
int SafeArray::getEl(int index){
    if (isIndex(index)){
        return ARR[index];
    }
    cout << "\nBad Index : " << index << endl;
    return -1;    
}

// Subscript Operator Overloading
int& SafeArray::operator[](int index){
    if (isIndex(index)){
        return ARR[index];
    }
    cout << "\nExiting due to Bad Index : " << index << endl;
    exit(0);
}

// Sets the LIMIT
void SafeArray::setLimit(int LIMIT){
    if (this-> LIMIT > LIMIT){
        cout << "\nCan't Change the LIMIT. Try a higher Size !" << endl;
        return;
    }
    this-> LIMIT = LIMIT;
}

// Returns the Current LIMIT
int SafeArray::getLimit(){
    return LIMIT;
}

// Prints the whole Array
void SafeArray::print(){
    for(int i = 0 ; i < LIMIT ; i++){
        cout << ARR[i] << " ";
    }
    cout << "\n";
}

int main(){

    SafeArray A1,A2(2); // Object with parameter and without it
    A1[2] = 3; // Will Change
    A1.setLimit(3); // Can't Change
    cout << "\nPrinting SafeArray" ;
    A1.print(); // Prints whole Array

    A2[3] = 5; // Can't Insert

    return 0;
}