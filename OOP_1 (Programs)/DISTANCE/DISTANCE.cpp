#include <iostream>
#include "DISTANCE.h" // Importing DISTANCE header
using namespace std;

//---Customizing the methods of DISTANCE

// Default Constructor
DISTANCE :: DISTANCE(){
	feets = 0;
	inches = 0;
}

// Parameterized Constructor having Default argument
DISTANCE :: DISTANCE(int f, int i = 0){
	feets = f;
	inches = i;
}

// Input Method
void DISTANCE :: input(){
        cout << "\nEnter feets  : "; cin >> feets;
        cout << "\nEnter inches : "; cin >> inches;
    }

// Output Method
void DISTANCE :: display(){
        cout << "The distance is : " << feets << "." << inches << " feets";
    }

// Function to add feets and inches in true form
void DISTANCE :: addDistances(int feets, int inches, int feets2, int inches2, int *_feets, int *_inches){
			int FEETS = (inches + inches2) / 12 ;
            *_feets = feets + feets2 + FEETS;
            *_inches = inches + inches2 - (FEETS * 12);
    }

// Driver Function
int main(){

	// Declaring DISTANCE array
    DISTANCE ds[2];

	// Creating Special object Parameterized Constructor
	DISTANCE D(10);

	// Declaring required variables
    int f1, f2, i1, i2, f, i;

	// Taking Input
    for (int i = 0; i <= 1; i++){
        cout << "\nEnter values for Distance no : " << i + 1;
        ds[i].input();
	}

	// Clearing Input Screen
	system("cls");

	// Accessing values and storing Using Getters

	// Accessing values of first element
    f1 = ds[0].getFeets();
    i1 = ds[0].getInches();

	// Accessing values of second element
    f2 = ds[1].getFeets();
    i2 = ds[1].getInches();

	// Summing both distances
    D.addDistances(f1, i1, f2, i2, &f, &i);

	// Displaying Sum
    cout << "\nThe sum of both Distances is : " << f << "." << i << " feets" << endl;

	// Setting Value using Setter
	D.setInches(13);
	
	// Displaying Information of special DISTANCE using Getters
	cout << "\nSpecial Distance:\n\tFeets : " << D.getFeets() << "." << D.getInches() << " feets" << endl;

	// Returning
	return 0;
}