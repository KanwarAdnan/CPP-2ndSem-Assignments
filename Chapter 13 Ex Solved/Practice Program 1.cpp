/*
Write a class Player that contains , attributes for the player's name, average and team.
Write three functions , input ,change and display these attributes. Also write constructor
that asks for input to initialize all the attributes.
*/

#include <iostream>
using namespace std;

class Player{
    private:
        string pname;
        string team;
        float avg;
    public:
        // Required Constructor
        Player(){
            system("cls");
            cout << "\nEnter the name of player : ";
            cin >> pname;
            cout << "\nEnter the team of player : ";
            cin >> team;
            cout << "\nEnter the average of player : ";
            cin >> avg;
        }

        // Parameterized Constructor
        Player(string n , string t , float a){
            pname = n;
            team = t;
            avg = a;
        }

        void input(){
            cout << "\nEnter the name of player : ";
            cin >> pname;
            cout << "\nEnter the team of player : ";
            cin >> team;
            cout << "\nEnter the average of player : ";
            cin >> avg;
        }

        void display(){
            cout << "\nPlayer Information : \n\tName : " << pname << "\n\tTeam : " << team << "\n\tAverage : " << avg << endl;
        }

        void change(){
            int choice=0;
            string value1;
            float value2;
            system("cls");
            cout << "\nPress desired number to modify : \n\t1 : Player Name \n\t2 : Player Team \n\t3: Player Average";
            cout << "\nWhat do you want to change? : ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Enter the New Name for Player ( " << pname << " ) : ";
                    cin >> value1;
                    setPname(value1);
                    break;
                case 2:
                    cout << "Enter the New Team for Player ( " << team << " ) : ";
                    cin >> value1;
                    setTeam(value1);
                    break;
                case 3:
                    cout << "Enter the new Average for Player ( " << avg << " ) : ";
                    cin >> value2;
                    setAverage(value2);
                    break;
            }
            system("cls");
            cout << "Changes have been made New Information : " << endl;
            display();
        }

        // Setters
        void setPname(string n){
            pname = n;
        }

        void setTeam(string t){
            team = t;
        }
        void setAverage(float a){
            avg = a;
        }

        // Getters
        string getPname(string n){
            return pname;
        }

        string getTeam(){
            return team;
        }

        int getAverage(){
            return avg;
        }

};

int main(){
    Player P1;
    P1.change();
    return 0;
}