/*

    Program 02:
        Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format. The final member function should add two objects of type time passed as arguments. Then overload following operators.
        An operator +: that adds two time objects.
        An operator +=: that adds two time objects.
        An operator -: that subtracts two time objects.
        An operator ++ (Pre-fix): that increments a time object and this increment is in seconds.
        An operator ++ (Post-fix): that increments a time object and this increment is in minutes.
        An operator <<: that prints a time object in the format 11:59:59.
        An operator >>: that inputs a time object.
        A main() program should create two initialized time objects (should they be const?) and one that isn’t initialized. Then it should add the two initialized values together, leaving the result in the third time variable. Finally it should display the value of this third variable.
        Make appropriate member functions const.
        Also write statements in main to appropriately use all overloaded operators.

*/

#include <iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        Time(int hours = 0 , int minutes = 0 , int seconds = 0);
        void setTime();
        void setTime(int hours , int minutes , int seconds);
        void show();

        Time operator+(Time temp1);
        Time operator-(Time temp1);
        void operator+=(Time temp1);
        void operator-=(Time temp1);
        void operator++(int);
        void operator++();

        friend ostream & operator << (ostream &out, const Time &temp);
        friend istream & operator >> (istream &in,  Time &temp);

        void setHours(int hours);
        void setMinutes(int mintues);
        void setSeconds(int seconds);

        int getHours();
        int getMinutes();
        int getSeconds();
};
