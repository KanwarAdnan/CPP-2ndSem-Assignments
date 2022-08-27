#include <fstream>
#include "cuboids.h"

Cuboids::Cuboids(){
    side1 = 1;
    side2 = 1;
    side3 = 1;
}

Cuboids::Cuboids(const Cuboids& temp){
    side1 = temp.side1;
    side2 = temp.side2;
    side3 = temp.side3;
}

Cuboids::Cuboids(float side1 , float side2 , float side3){
    setSide1(side1);
    setSide2(side2);
    setSide3(side3);
}

void Cuboids::setSide1(float side)  { side1 = (side > 1 && side < 35) ? side:1;  }
void Cuboids::setSide2(float side)  { side2 = (side > 1 && side < 35) ? side:1; }
void Cuboids::setSide3(float side)  { side3 = (side > 1 && side < 35) ? side:1; }
float Cuboids::getSide1()           { return side1; }
float Cuboids::getSide2()           { return side2; }
float Cuboids::getSide3()           { return side3; }

void Cuboids::input(){
    cout << "\nEnter The Sides of Cuboid (Must be x>1<35) : \n\n";

    cout << "\nSide 1 : ";
    cin >> side1;

    cout << "\nSide 2 : ";
    cin >> side2;

    cout << "\nSide 3 : ";
    cin >> side3;

    setSide1(side1);
    setSide2(side2);
    setSide3(side3);
}

Cuboids Cuboids::operator+(Cuboids temp){
    Cuboids temp2;

    temp2.side1 = side1 + temp.side1;
    temp2.side2 = side2 + temp.side2;
    temp2.side3 = side3 + temp.side3;

    return temp2;
}

ostream &operator<<(ostream &out,Cuboids temp){
    out << "\nSides of Cuboid: \n\n";
    out << "\nSide 1 : " << temp.side1;
    out << "\nSide 2 : " << temp.side2;
    out << "\nSide 3 : " << temp.side3 << endl;
 
    return out;
}

Cuboids& Cuboids::operator=(const Cuboids& temp){
    if (this != &temp){
        side1 = temp.side1;
        side2 = temp.side2;
        side3 = temp.side3;
    }
    return *this;
}