/*

    A cuboid is a three-dimensional shape having different measurement in each dimension say x, y and z. Cuboid shapes are often used for boxes, cupboards, rooms, buildings, etc. So keeping in the mind the importance of Cuboids, you have to implement the following functionalities.

    Declare a class named Cuboids with its three different data members of type float to have the measurements of the three dimensions.
    Value should only be assigned to the data members when it is greater than 0 and lesser than 35.00. Write all the set functions for each data member to set their values.
    Implement default (sets all data members to 1), parameterized and copy constructor.
    Provide a member function to take the inputs for a particular object�s data.
    Overload assignment operator to assign the data of one object to another.
    Overload Stream Insertion operator to display the data of object on the console.
    Overload the arithmetic operator (+) to return the result of two objects after addition.
    Write a global function named write2File() that declares an array of 10 objects, takes input from user for all cuboid objects and then write data to a file.

*/

#include <iostream>
#include <fstream>
using namespace std;

class Cuboids{
private:
    float x,y,z;
public:
    Cuboids();
    Cuboids(const Cuboids& temp);
    Cuboids(float x, float y , float z);
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    float getX();
    float getY();
    float getZ();

    void input();

    Cuboids& operator=(const Cuboids& temp);
    Cuboids operator+(Cuboids);
    friend ostream &operator<<(ostream &out,Cuboids);
};

Cuboids::Cuboids()                             : x(1), y(1),z(1) {}
Cuboids::Cuboids(const Cuboids& temp)          : x(temp.x), y(temp.y), z(temp.z) {}
Cuboids::Cuboids(float x , float y , float z)  { setX(x); setY(y); setZ(z); }
bool isValid(float side)                       { return ( side > 1 && side < 35 );  }
void Cuboids::setX(float side)                 { this-> x = isValid(side) ? side:1; }
void Cuboids::setY(float side)                 { this-> y = isValid(side) ? side:1; }
void Cuboids::setZ(float side)                 { this-> z = isValid(side) ? side:1; }
float Cuboids::getX()                          { return x; }
float Cuboids::getY()                          { return y; }
float Cuboids::getZ()                          { return z; }

void Cuboids::input(){
    cout << "\nEnter The Sides of Cuboid (Must be x>1<35) : \n\n";

    cout << "\nSide 1 : "; cin >> x;
    cout << "\nSide 2 : "; cin >> y;
    cout << "\nSide 3 : "; cin >> z;

    setX(x); setY(y); setZ(z);
}

Cuboids Cuboids::operator+(Cuboids temp){
    Cuboids temp2;

    temp2.x = x + temp.x;
    temp2.y = y + temp.y;
    temp2.z = z + temp.z;

    return temp2;
}

ostream &operator<<(ostream &out,Cuboids temp){
    out << "\nSides of Cuboid: \n\n";
    out << "\nSide 1 : " << temp.x;
    out << "\nSide 2 : " << temp.y;
    out << "\nSide 3 : " << temp.z << endl;
 
    return out;
}

Cuboids& Cuboids::operator=(const Cuboids& temp){
    if (this != &temp){
        x = temp.x;
        y = temp.y;
        z = temp.z;
    }

    return *this;
}

void write2File(Cuboids *cuboids,int size){
    fstream file;
    file.open("data.ssv",ios::app);

    for(int i = 0 ; i < size ; i++){
        cuboids[i].input();
        file << cuboids[i].getX() << ' ';
        file << cuboids[i].getY() << ' ';
        file << cuboids[i].getZ() << '\n';
    }

    file.close();
}

int main(){
    int size = 10;
    Cuboids cuboids[size];

    write2File(cuboids,size);
    //system("del data.ssv"); // because we want new data everytime 

    for (int i = 0 ; i < size ; i++)
        cout << cuboids[i];

    return 0;
}
