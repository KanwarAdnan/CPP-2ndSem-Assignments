#include <iostream>
#include "ITEMS.h" // Importing ITEMS Header
using namespace std;

//---Customizing the methods of ITEMS

// Default Constructor
ITEMS :: ITEMS(){
	item = "";
	price = 0;
}

// Parameterized Constructor
ITEMS :: ITEMS(string i,int p = 0){
	item = i;
	price = p;
}

// Input Method
void ITEMS :: get_data(){
    cout << "\nItem Name  : "; cin >> item;
    cout << "\nItem Price : "; cin >> price;
}

// Output Method
void ITEMS :: put_data(){
        cout << "\nItem Information : "  << "\n\tName : " << item << "\n\tPrice : " << price << endl;
}


// Driver Function
int main(){
    // Making Object
    ITEMS IT;

	// Creating Special object Parameterized Constructor
	ITEMS IT2("Book");

    // Taking Input
    IT.get_data();

	// Clearing Input Screen
	system("cls");

    // Displaying Output
    IT.put_data();

	// Setting Value using Setter
	IT2.setPrice(100);

	// Displaying Information of special ITEM using Getters
	cout << "\nSpecial Item:\n\tName : " << IT2.getItem() << "\n\tPrice : " << IT2.getPrice() << endl;

	// Returning
    return 0;
}
