#include <iostream>
using namespace std;

class COMPLEX{
	private:
		// Data Members
		int real;
		int imaginary;

	public:
		// Default Constructor
		COMPLEX();

		// Parameterized Constructor
		COMPLEX(int r,int i);

		// Input Method
		void input();

		// Output Method
		void display();
		
		// Setters
		void setReal(int r){
			real = r;
		}

		// Special Function
		COMPLEX operator + (COMPLEX const &obj) {
			COMPLEX res;
			res.real = real + obj.real;
			res.imaginary = imaginary + obj.imaginary;
			return res;
		}
		void setImaginary(int i){
			imaginary = i;
		}
	
		// Getters
		int getReal(){
			return real;
		}

		int getImaginary(){
			return imaginary;
		}

};