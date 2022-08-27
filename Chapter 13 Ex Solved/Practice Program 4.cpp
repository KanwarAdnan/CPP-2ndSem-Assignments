/*
Write a class Run that contains the following data members:
    The name of the runner
    The distance covered by a runnner.

        Member Functions:
            Get function to input runner name and distance
            Show function to display runner name and distance.

    Problem 1:
        The user should be able to show the name of the runner who has covered the longest distance at any point of time.
        Hint:
            Use static data method
*/

#include <iostream>
using namespace std;

class Run{
    private:
        static int max_distance;
        static string max_name;
        string Name;
        int Distance;
    public:
        Run(){
            Name = "";
            Distance = 0;
        }

        Run(string n , int d=0){
            Name = n;
            setDistance(d);
        }

        void Get(){
            cout << "Enter the name of the runner : ";
            cin >> Name;
            cout << "Enter the distance covered by the runner : ";
            cin >> Distance;
        }

        void Show(){
            cout << "The Name of the runner is : " << Name;
            cout << "The Total Distance covered by the runner is : " << Distance;
        }

        static void longestRunner(){
            cout << "The longest Runner is : " << max_name << ", distance : " << max_distance << endl;
        }

        void setName(string n){
            Name = n;
        }

        void setDistance(int n){
            Distance = n;
            if (n>max_distance){
                max_distance = n;
                max_name = Name;
            }
        }

        string getName(){
            return Name;
        }

        int getDistance(){
            return Distance;
        }

};

int Run::max_distance = 0;
string Run::max_name = "";

int main(){
    Run R1("Kanwar",100);
    Run R2("Adnan",200);
    Run R3("Akhtar",300);
    R2.setDistance(500);
    R1.longestRunner();
    return 0;
}