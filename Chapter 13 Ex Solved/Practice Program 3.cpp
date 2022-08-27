/*
Create two classes DM and DB to store the value of distances. DM stores distances in metres and centimetres and DB in feet and inches. Write a program that can read values for the classobjects and add one object of DM with another object of  DB.
Hint use : Friend Function
*/

#include <iostream>
using namespace std;
const float FEETS=3.28084;

class DB;
class DM{
    private:
        float meter;
        float cmeter;
    public:
        DM(){
            meter = 0;
            cmeter = 0;
        }
        DM(float m , float c) : meter(m) , cmeter(c) {}

        void input(){
            cout << "Enter the values for Distance in Meteres and Centi Meters";
            cout << "\nMeters : "; cin >> meter;
            cout << "\nCenti Meters : "; cin >> cmeter;
        }

        void display(){
            cout << "The Distance is : " << meter << "." << cmeter << " meters" << endl;
        }

        // Setters
        void setMeter(float m){
            meter = m;
        }
        void setCmeter(float c){
            cmeter = c;
        }

        // Getters
        float getMeter(){
            return meter;
        }

        float getCmeter(){
            return cmeter;
        }

        friend float add(DM,DB);

};

class DB{
    private:
        float feet,inch;
    public:
        DB(){
            feet = 0;
            inch = 0;
        }
        DB(float m , float c) : feet(m) , inch(c) {}

        void input(){
            cout << "Enter the values for Distance in Feets and Inches";
            cout << "\nFeets : "; cin >> feet;
            cout << "\nInches : "; cin >> inch;
        }

        void display(){
            cout << "The Distance is : " << feet << "." << inch << " feets" << endl;
        }

        // Setters
        void setFeet(float m){
            feet = m;
        }
        void setInch(float c){
            inch = c;
        }

        // Getters
        float getFeet(){
            return feet;
        }

        float getInch(){
            return inch;
        }

        friend float add(DM,DB);

};


float add(DM m,DB f){
    float meteres = (m.meter+(m.cmeter/100));
    float feets = (meteres*FEETS);
    float inches = f.inch/12;
    feets += inches;
    return feets;
}


int main(){
    DM d;
    d.input();
    d.display();
 
    DB D;
    D.input();
    D.display();

    cout << "The sum of both distances is : " << add(d,D) << " feets\n";

    return 0;
}