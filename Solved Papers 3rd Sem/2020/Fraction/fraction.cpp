#include "denominator.h"
#include "fraction.h"
#include <iostream>
using namespace std;

fraction::fraction(int n, int d){
    num = n;
    dem = d;
    if (dem == 0){
        DenominatorNotZero obj;
        obj.setDem(dem);
        throw obj;
    }
}

fraction::~fraction(){}

