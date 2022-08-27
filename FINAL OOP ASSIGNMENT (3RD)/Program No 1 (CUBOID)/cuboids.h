/*

    A cuboid is a three-dimensional shape having different measurement in each dimension say x, y and z. Cuboid shapes are often used for boxes, cupboards, rooms, buildings, etc. So keeping in the mind the importance of Cuboids, you have to implement the following functionalities.

    Declare a class named Cuboids with its three different data members of type float to have the measurements of the three dimensions.
    Value should only be assigned to the data members when it is greater than 0 and lesser than 35.00. Write all the set functions for each data member to set their values.
    Implement default (sets all data members to 1), parameterized and copy constructor.
    Provide a member function to take the inputs for a particular object’s data.
    Overload assignment operator to assign the data of one object to another.
    Overload Stream Insertion operator to display the data of object on the console.
    Overload the arithmetic operator (+) to return the result of two objects after addition.
    Write a global function named write2File() that declares an array of 10 objects, takes input from user for all cuboid objects and then write data to a file.

*/

#include <iostream>
using namespace std;

class Cuboids{
    private:
        float side1,side2,side3;
    public:
        Cuboids();
        Cuboids(const Cuboids& temp);
        Cuboids(float side1, float side2 , float side3);
        void setSide1(float side1);
        void setSide2(float side2);
        void setSide3(float side3);

        void input();

        float getSide1();
        float getSide2();
        float getSide3();

        Cuboids& operator=(const Cuboids& temp);
        Cuboids operator+(Cuboids);
        friend ostream &operator<<(ostream &out,Cuboids);
};