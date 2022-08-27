#include "publication.h"

class Book : public Publication{
    private:
        int pages;
    public:
        void getData();
        void putData();

        void showPrice();
};

void Book::getData(){
    Publication::getData();
    cout << "\nPages : ";
    cin >> pages;
}

void Book::putData(){
    Publication::putData();
    cout << "\nPages : " << pages << endl;
}

void Book::showPrice(){
    cout << "\nThe Price of Book is : " << price << endl;
}