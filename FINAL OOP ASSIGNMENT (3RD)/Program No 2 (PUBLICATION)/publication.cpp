#include "publication.h"

void Publication::getData(){
    cout << "\nEnter Book Information : \n";
    cin.ignore();
    cout << "\nTitle : ";
    getline(cin,title);

    cout << "\nPrice : ";
    cin >> price;
}

void Publication::putData(){
    cout << "\nBook Information : \n";

    cout << "\nTitle : " << title;
    cout << "\nPrice : " << price << endl;
}