#include <iostream>
#include "COMPLEX.h" // Importing COMPLEX header
using namespace std;

//---Customizing the methods of COMPLEX

// Default Constructor
COMPLEX :: COMPLEX(){
	real = 0;
	imaginary = 0;
}

// Parameterized Constructor having Default argument
COMPLEX :: COMPLEX(int r , int i = 0){
	real = r;
	imaginary = i;
}

// Input Method
void COMPLEX :: input(){
        cout << "\nEnter Real no   : "; cin >> real;
        cout << "\nEnter Imaginary : "; cin >> imaginary;
    }

// Output Method
void COMPLEX :: display(){
        cout << "\nComplex number : \n\t Real : " << real << "\n\t Imaginary : " << imaginary << "i" << endl;
    }

// Driver Function
int main(){
	// Declaring COMPLEX array
    COMPLEX Cs[2];

	// Creating Special object Parameterized Constructor
	COMPLEX cx(5);

    // Taking Input and adding
    for (int i = 0; i <= 1; i++){
        cout << "\nEnter values for Complex no : " << i + 1;
        Cs[i].input();
    }

	COMPLEX c3 = Cs[0] + Cs[1];

	// Clearing Input Screen
	system("cls");

    // Displaying the output
    cout << "\nThe sum of all complex numbers is : " << c3.getReal() << " " << c3.getImaginary() << "i" << endl;

	// Setting Value using Setter
	cx.setImaginary(5);

	// Displaying Information of special COMPLEX using Getters
	cout << "\nSpecial Complex Number:\n\t" << cx.getReal() << " " << cx.getImaginary() << "i" << endl;

	// Returning
    return 0;
}
