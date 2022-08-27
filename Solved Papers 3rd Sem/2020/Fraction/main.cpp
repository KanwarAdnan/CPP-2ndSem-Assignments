#include <iostream>
#include "fraction.cpp"
using namespace std;

int main(){
    try{
        fraction x;
        fraction y(2, 0);
        fraction z(0, 0);
    }
    catch (DenominatorNotZero z){
        z.raiseError();
    }

    return 0;
}