/*
Write a class Car that contains the following attributes:
    The name of car
    The direction of car (E,W,N,S)
    The position of car (from imagainary zero point)

    The class has the following member functions:
        A constructor to initialize the attributes.
        Turn function to change the direction of car to one step right side
        overload the Turn function to chagne the direction to any side directly. It sshould accept the direction as parameter.
        Move function to change the position of car away from zero point. It itshould accept the distance as parameter.
*/


#include <iostream>
using namespace std;

class Car{
    private:
        string car;
        char direction;
        int position;
    public:
        Car(){
            cout << "Enter the name of the Car : ";
            cin >> car;
            cout << "Enter the direction of Car : ";
            cin >> direction;
            cout << "Enter the position of Car : ";
            cin >> position;
        }

        // Functions to displace car

        void displace(int d){
            position += d;
            cout << "\nThe car 's current displacment is : " << position << endl;
        }

        void move(){
            int temp;
            cout << "Enter the distance to be covered : ";
            cin >> temp;
            displace(temp);

        }

        void move(int d){
            displace(d);
        }

        // Functions to change the direction of car

        void invert(){
            switch (direction){
                case 'W':
                    setDirection('E');
                    break;
                case 'E':
                    setDirection('S');
                    break;
                case 'S':
                    setDirection('N');
                    break;
                case 'N':
                    setDirection('W');
                    break;
            }
        }

        void Turn(){
            cout << "\nThe current direction of car is : " << direction << endl;
            invert();
        }

        void Turn(char c){
            setDirection(c);
        }

        // Setters

        void setDirection(char c){
        direction = c;
        cout << "\nThe current direction of car was set to : " << direction << endl;
        }

        void setName(string n){
            car = n;
        }

        void setPosition(int n){
            position = n;
        }

        // Getters

        string getName(){
            return car;
        }

        char getDirection(){
            return direction;
        }

        int getPosition(){
            return position;
        }
};

int main(){
    Car c1;
    c1.move(10);
    c1.Turn();
    c1.Turn('W');
    return 0;
}