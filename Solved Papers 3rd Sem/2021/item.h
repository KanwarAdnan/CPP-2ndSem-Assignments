#include <iostream>
using namespace std;

class Item
{
private:
	char name[100];		//name of the item
	double price;		//price of the item
// Additions
public:
	Item(){
		name[0] = '\0';
		price = 0;
	}
	void input();
	void output();
	double getPrice();
	void setPrice(double price);
};

double Item::getPrice() { return price; }
void Item::setPrice(double price) { this-> price = price; }

void Item::input(){
	cout << "\nEnter Item Information : \n";

	cout << "\nName : ";
	cin >> name;

	cout << "\nPrice : ";
	cin >> price;
}

void Item::output(){
	cout << "\nItem Information : \n";
	cout << "\nName  : " << name;
	cout << "\nPrice : " << price << endl;
}