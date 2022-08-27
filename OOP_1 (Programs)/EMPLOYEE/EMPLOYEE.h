#include <iostream>
using namespace std;

class EMPLOYEE{
	private:
		// Data Members
		int EMPCODE;
		string EMPNAME;

	public:
		// Default Constructor
		EMPLOYEE();
	
		// Parameterized Constructor
		EMPLOYEE(int c,string n);
		
		// Input Method
		void get_data();

		// Output Method
		void display();
		
		// Setters
		void setEmpcode(int c){
			EMPCODE = c;
		}

		void setEmpname(string n){
			EMPNAME = n;
		}

		// GETTERS
		int getEmpcode(){
			return EMPCODE;
		}

		string getEmpname(){
			return EMPNAME;
		}
};