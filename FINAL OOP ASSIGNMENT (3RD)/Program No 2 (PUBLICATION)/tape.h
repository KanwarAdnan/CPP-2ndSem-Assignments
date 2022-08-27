#include "publication.h"

class Tape : public Publication{
    private:
        float playTime;
    public:
        void getData();
        void putData();

        void showPrice();
};

void Tape::getData(){
    Publication::getData();

    cout << "\nPlay Time : ";
    cin >> playTime;
}

void Tape::putData(){
    Publication::putData();
    cout << "\nPlay Time : " << playTime << endl;
}

void Tape::showPrice(){
    cout << "\nThe Price of Tape is : " << price;
}