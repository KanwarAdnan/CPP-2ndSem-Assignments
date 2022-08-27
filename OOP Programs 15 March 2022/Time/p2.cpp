#include "p2.h"

// Ctor
Time::Time(int hours , int minutes , int seconds){

    this-> hours = hours;
    this-> minutes = minutes;
    this-> seconds = seconds;

    setTime(hours,minutes,seconds); // It will format the time pattern

}

// Time Setter
void Time::setTime(int hours , int minutes , int seconds){

    setHours(hours);
    setMinutes(minutes);
    setSeconds(seconds);

}

// Time Setter
void Time::setTime(){

    cout << "\nHours : ";
    cin >> this-> hours;

    cout << "\nMinutes : ";
    cin >> this-> minutes;

    cout << "\nSeconds : ";
    cin >> this-> seconds;

    setTime(hours,minutes,seconds); // It will format the time pattern

}

// Display Time
void Time::show(){

    cout << "\nTime : " << this-> hours << ":" << this-> minutes << ":" << this-> seconds << endl;

}

// (+) Operator Overloading
Time Time::operator+(Time temp1){
    Time temp2;

    temp2.seconds = this-> seconds + temp1.seconds;
    temp2.minutes = this-> minutes + temp1.minutes + (temp2.seconds/60);
    temp2.hours = this-> hours + temp1.hours + (temp2.minutes/60);

    temp2.minutes = (temp2.minutes % 60);
    temp2.seconds = (temp2.seconds % 60);

    return temp2;

}

// (-) Operator Overloading
Time Time::operator-(Time temp1){
    Time temp2;

    temp2.seconds = this-> seconds - temp1.seconds;
    temp2.minutes = this-> minutes - temp1.minutes + (temp2.seconds/60);
    temp2.hours = this-> hours - temp1.hours - (temp2.minutes/60);

    temp2.minutes = (temp2.minutes % 60);
    temp2.seconds = (temp2.seconds % 60);

    return temp2;

}

// (+=) Operator Overloading
void Time::operator+=(Time temp1){

    this-> seconds += temp1.seconds;
    this-> minutes += temp1.minutes + (this-> seconds/60);
    this-> hours = this-> hours + temp1.hours + (this-> minutes/60);

    this-> minutes = (this-> minutes % 60);
    this-> seconds = (this-> seconds % 60);

}

// (-=) Operator Overloading
void Time::operator-=( Time temp1 ){

    this-> seconds -= temp1.seconds;
    this-> minutes -= temp1.minutes + (this-> seconds/60);
    this-> hours = hours - temp1.hours - (this-> minutes/60);

    this-> minutes = (this-> minutes % 60);
    this-> seconds = (this-> seconds % 60);

}

// (++) Operator Overloading (Post)
void Time::operator++(int){

    if ( this-> seconds < 60 ){
        this-> seconds++;
        return;
    }

    this-> minutes++;
    this-> seconds++;

}

// (++) Operator Overloading (Pre)
void Time::operator++(){

    if (this-> minutes < 60){
        this-> minutes++;
        return;
    }

    this-> hours++;
    this-> minutes++;

}

// Setters
void Time::setHours(int hours){
    this-> hours = (hours < 24) ? hours:00;  
}

void Time::setMinutes(int minutes){
    this-> minutes = (minutes < 60) ? minutes:00;  
}

void Time::setSeconds(int seconds){
    this-> seconds = (seconds < 60) ? seconds:00;  
}

// Getters
int Time::getHours(){
    return hours;
}

int Time::getMinutes(){
    return minutes;
}

int Time::getSeconds(){
    return seconds;
}


// Output Time Object
ostream & operator << (ostream &out, const Time &temp)
{

    out << temp.hours;
    out << ":" << temp.minutes;
    out << ":" << temp.seconds << endl;

    return out;

}

// Input Time Object 
istream & operator >> (istream &in,  Time &temp)
{

    cout << "\nHours : ";
    in >> temp.hours;

    cout << "\nMinutes : ";
    in >> temp.minutes;

    cout << "\nSeconds : ";
    in >> temp.seconds;

    return in;

}

// Driver Function
int main(){

    // Declaring and Initilazing Time Objects
    Time t1(2,48,49),t2,t3,t4;

    t2.setTime(1,1,1);
    
    t3 = t1 - t2;
    cout << "\nTime After Subtracting, t1 - t2 :" << endl;
    t3.show();  // 1:47:48
    
    t3 -= t2;
    cout << "\nTime After Subtracting, t3 -= t2 :" << endl;
    t3.show();  // 0:46:47

    t4 = t1 + t2;
    cout << "\nTime After Adding, t1 + t2 :" << endl;
    t4.show();  // 3:49:50

    t4 += t1;
    cout << "\nTime After Adding, t4 += t1 :" << endl;
    t4.show();  // 6:38:39

    cout << "\n";

    cout << "Seconds Before : " << t1.getSeconds() << endl; // 49
    cout << "Minutes Before : " << t1.getMinutes() << endl; // 48

    ++t1;   // Will increment in seconds
    t1++;   // Will increment in minutes

    cout << "Seconds After : " << t1.getSeconds() << endl; // 50
    cout << "Minutes After : " << t1.getMinutes() << endl; // 49

    // Calling Setters of t1
    t1.setHours(1);
    t1.setMinutes(1);
    t1.setSeconds(1);

    t1.show();

    // Calling Getters of t1
    cout << "\nTime Using Getters : " << t1.getHours() << ":" << t1.getMinutes() << ":" << t1.getSeconds() << endl;

    // Taking Input of Time Object
    cout << "\nEnter The Time ! " << endl;
    cin >> t4;

    // Displaying Time Object
    cout << "\nThe Time : ";
    cout << t4;

    return 0;

}