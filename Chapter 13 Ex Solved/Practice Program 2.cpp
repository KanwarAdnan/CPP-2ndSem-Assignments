#include <iostream>
using namespace std;

class Account{
    private:
        string name_dep;
        string type_acc;
        int rem;
        int id;
    public:
        Account(){
            system("cls");
            cout << "\nEnter Account Number : ";
            cin >> id;
            cout << "\nEnter Name of Depositer : ";
            cin >> name_dep;
            cout << "\nEnter the Type of Account : ";
            cin >> type_acc;
            cout << "\nEnter the Balance Amount : ";
            cin >> rem;
            system("cls");
        }

        Account(int i ,string d , string t , int r){
            id = i;
            name_dep = d;
            type_acc = t;
            id = r;
        }

        void display(){
            cout << "\nAccount Information : \n\tName of Depositer : " << name_dep;
            cout << "\n\tAccount Number : " << id;
            cout << "\n\tAccount Type : " << type_acc;
            cout << "\n\tAccount Balance : " << rem;
        }

        void showbalance(){
            cout << "\n\tCurrent Balance Amount : " << rem << endl;
        }

        void addmoney(int r){
            if (r>0){
                rem += r;
                cout << "\nMoney has been deposited !";
                showbalance();
            }
            else{
                cout << "\nEnter a valid amount ! " << endl;
            }
        }

        void checkout(int amount){
            rem -= amount; 
            cout << "\nMoney has been withdrawn ! " << endl;
            showbalance();

        }

        void checkmoney(int amount){
            if (rem>=amount)
                checkout(amount);
            else{
                cout << "\nNot Enough balance to withdraw !" << endl;
            }
        }

        // Default

        void deposit(){
            int temp;
            cout << "\n\nHow much you want to deposit? : ";
            cin >> temp;
            addmoney(temp);            
        }


        void withdraw(){
            int temp;
            cout << "\nHow much you want to withdraw? : ";
            cin >> temp;
            checkmoney(temp);
        }

        // Parameterized

        void deposit(int amount){
            addmoney(amount);            
        }

        void withdraw(int amount){
            checkmoney(amount);
        }


        // Setters

        void setDep(string n){
            name_dep = n;
        }

        void setType(string n){
            type_acc = n;
        }

        void setRem(int r){
            rem = r;
        }

        void setId(int i){
            id = i;
        }

        // Getters

        int getId(){
            return id;
        }

        int getRem(){
            return rem;
        }

        string getDep(){
            return name_dep;
        }

        string getType(){
            return type_acc;
        } 



};

int main(){
    Account A1;
    A1.display();
    A1.deposit();
    A1.withdraw();
    A1.withdraw(100);
    A1.deposit(200);
    return 0;
}