#include <iostream>
#include "EMPLOYEE.h" // Importing EMPLOYEE header
using namespace std;

//---Customizing the methods of EMPLOYEE

// Default Constructor
EMPLOYEE :: EMPLOYEE(){
	EMPCODE = 0;
	EMPNAME = "AD";
}

// Parameterized Constructor having Default argument
EMPLOYEE :: EMPLOYEE(int c , string n = ""){
	EMPCODE = c;
	EMPNAME = n;
}

// Input Method
void EMPLOYEE :: get_data(){
	cout << "\nEnter Employee ID   : "; cin >> EMPCODE;
	cout << "\nEnter Employee NAME : "; cin >> EMPNAME;
}

// Output Method
void EMPLOYEE :: display(){
	cout << "\nID : " << EMPCODE << "\nNAME : " << EMPNAME << endl;
}

// Driver function
int main(){
	
	// Specifying the number of array elements
	int count;


	// Taking Input for `count`
	cout << "\nHow many Employees you want to create? : ";
	cin >> count;

	// Declaring EMPLOYEE array
	EMPLOYEE Emps[count];

	// Creating Special object Parameterized Constructor
	EMPLOYEE emp(1);


	// Taking Input
	for(int i = 0 ; i < count ; i++){
		cout << "\nEnter Information of Employee number : " << (i + 1) << endl ;
		Emps[i].get_data();
	}

	// Clearing Input Screen
	system("cls");

	// Displaying Data
	for(int i = 0 ; i < count ; i++){
		cout << "\nInformation of Employee number : " << (i + 1) << endl ;
		Emps[i].display();
	}

	// Setting Value using Setter
	emp.setEmpname("Adnan");

	// Displaying Information of special EMPLOYEE using Getters
	cout << "\nSpecial Employee:\n\tID : " << emp.getEmpcode() << "\n\tNAME : " << emp.getEmpname() << endl;

	// Returning
	return 0;
}
