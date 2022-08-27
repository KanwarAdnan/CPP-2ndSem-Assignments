#include <iostream>
using namespace std;

class DISTANCE{
	private:
		// Data Members
		int feets;
		int inches;

	public:
		// Default Constructor
		DISTANCE();
		
		// Parameterized Constructor
		DISTANCE(int f,int i);

		// Input Method
		void input();
		
		// Output Method
		void display();

		// Method sum distances
		void addDistances(int feets, int inches, int feets2, int inches2, int *_feets, int *_inches);

		// Setters
		void setFeets(int f){
			feets = f;
		}

		void setInches(int i){
			inches = (i > 12) ? 12:i;
		}
		
		// Getters
		int getFeets(){
			return feets;
		}

		int getInches(){
			return inches;
		}
};