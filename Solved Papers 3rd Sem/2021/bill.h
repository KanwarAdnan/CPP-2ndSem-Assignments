#include <iostream>
using namespace std;

class Bill{
	int id,itemCount;	
	Item *list;			
	double billAmount;
	// Additions
	static int uid;
public:
		Bill(){
			billAmount = 0;
			itemCount = 0;
			list = NULL;
			id = ++uid;
		}
		void computeAllBills(Bill *bills , int size);
		void computeOneBill(Bill &bill);
		// additional
		void setItems(Item *list);
		void setItemCount(int itemCount);
		void setBillAmount(double amount);
		double getBillAmount();
		int getItemsCount();
		Item* getItems();
		int getId();
};

void Bill::setItems(Item *list)         	{ this-> list = list; }
void Bill::setItemCount(int itemCount)  	{ this-> itemCount = itemCount; }
int Bill::getId() 					    	{ return id; }
int Bill::getItemsCount()			    	{ return itemCount; }
Item* Bill::getItems()				    	{ return list; }
double Bill::getBillAmount()		    	{ return billAmount; }
void Bill::setBillAmount(double billAmount) { this-> billAmount = billAmount; }

void Bill::computeAllBills(Bill *bills,int size){
	for(int i = 0 ; i < size ; i++)
		computeOneBill(bills[i]); 
}

void Bill::computeOneBill(Bill &bill){
	double temp = bill.getBillAmount();
	Item* tempList = bill.getItems();
	int tempCount  =  bill.getItemsCount();

	// Computing Bill
	for(int i = 0 ; i < tempCount ; i++)
		temp += tempList[i].getPrice();

	//Setting it to the object data memeber
	bill.setBillAmount(temp);

}