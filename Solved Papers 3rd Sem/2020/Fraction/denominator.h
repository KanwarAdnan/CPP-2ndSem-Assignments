#include <iostream>
#include<exception>
using namespace std;

class DenominatorNotZero : public exception{
private:
    int dem;
public:
    void raiseError()       { cerr << "\nDenominator Shouldn\'t Be Zero!\n"; }
    void setDem(int dem)    { this-> dem = dem; }
    int  getDem()           { return dem; }
};
