/*

    Program 03:
    Another weakness of C++ is that it does not automatically check array indexes to see whether they are in bounds. (This makes array operations faster but less safe.) We can use a class to create a safe array that checks the index of all array accesses. Write a class called safearay that uses an int array of fixed size (call it LIMIT) as its only data member. There will be two member functions. 
    The first, putel(), takes an index number and an int value as arguments and inserts the int value into the array at the index. 
    The second, getel(), takes an index number as an argument and returns the int value of the element with that index. 
    safearay sa1; // define a safearay object
    int temp = 12345; // define an int value 
    sa1.putel(7, temp); // insert value of temp into array at index 7
    temp = sa1.getel(7); // obtain value from array at index 7 
    Both functions should check the index argument to make sure it is not less than 0 or greater than LIMIT-1. You can use this array without fear of writing over other parts of memory. 
    Using functions to access array elements doesn’t look as eloquent as using the [] operator. 
    Overload [] operator to make our safearay class work more like built-in arrays.

*/

#include <iostream>
using namespace std;

class SafeArray{
    private:
        int LIMIT; 
        int* ARR;

    public:
        SafeArray(int LIMIT = 5);
        bool isIndex(int index);
        void putEl(int index, int value);
        int getEl(int index);
        int& operator[](int);
        int getLimit();
        void setLimit(int LIMIT);
        void print();
        void fillN(int number);
        void fill();
};