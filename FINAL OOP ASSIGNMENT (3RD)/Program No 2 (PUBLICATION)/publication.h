/*

    Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the title (a string) and price (type float) of a publication. 
    From this class derive two classes: 
    book, which adds a page count (type int), 
    and tape, which adds a playing time in minutes (type float). 
    Each of these three classes should have a getdata() function to get its data from the user at the keyboard,
    and a putdata() function to display its data.
    Write a main() program to test the book and tape classes by creating instances of them, asking the user to fill in data with getdata(), and then displaying the data with putdata().

    Then, Re-Write main() program to test the book and tape classes by creating pointers of them and asking the user to fill in data with getdata(), and then displaying the data with putdata() through pointers.

    Then add a virtual function ShowPrice() in all classes and call these functions in main() to show the code for Polymorphism.

*/

#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <iostream>
using namespace std;

class Publication{
    protected:
        string title;
        float price;
    public:
        void getData();
        void putData();

        virtual void showPrice(){
            cout << "\nPrice : " << price << endl;
        }
};

#endif