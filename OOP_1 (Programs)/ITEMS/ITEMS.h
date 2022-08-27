#include <iostream>
using namespace std;

class ITEMS{
	private:
		// Data Members
		string item;
		int price;

	public:
		// Default Constructor
		ITEMS();

		// Parameterized Constructor
		ITEMS(string s , int p);

		// Input Method
		void get_data();

		// Output Method
		void put_data();

		// Setters
		void setItem(string i){
			item = i;
		}

		void setPrice(int p){
			price = p;
		}

		// Getters
		string getItem(){
			return item;
		}

		int getPrice(){
			return price;
		}
};
