#include <iostream>
using namespace std;

class Binary{
private:
    int a,b;
public:
    Binary(){
        a = 0;
        b = 0;
    }

    Binary(const Binary& ref){
        a = ref.a;
        b = ref.b;
    }

    void setA(int a){ this -> a = a;}
    void setB(int b){ this -> b = b;}
    int getA()      { return a; }
    int getB()      { return b; }


    void getBinary(){
        cout << "\nEnter the value for A : ";
        cin >> a;

        cout << "\nEnter the value for B : ";
        cin >> b;

        cout << '\n';
    }

    Binary &operator=(const Binary temp){
        a = temp.a;
        b = temp.b;
    }

    friend ostream &operator<<(ostream& out , Binary temp){
        out << "\nValue of A : " << temp.a;
        out << "\nValue of B : " << temp.b;
        out << '\n';

        return out;
    }

    Binary operator+(Binary temp){
        Binary temp2;

        temp2.a = a + temp.a;
        temp2.b = b + temp.b;

        return temp2;
    }

    // Unary !(not) operator overloading
    bool operator!(){ return (a >= 0 && b>=0); }

    int getEqualIndex(Binary *array , int size){
        for( int i = 1 ; i < size+1 ; i++){
            if ( (array[i - 1].a == array[i].a) && (array[i - 1].b == array[i].b) ){
                return (i - 1); // index of left side object
            }
        }
        return -1;
    }

};

int main(){
    Binary a,b,c;
    Binary array[4];

    // setting values

    array[0].setA(0);
    array[0].setB(0);

    // 1,2 index have the same values
    array[1].setA(1);
    array[1].setB(1);
    array[2].setA(1);
    array[2].setB(1);

    array[3].setA(2);
    array[3].setB(2);

    // calling the function
    int index = a.getEqualIndex(array,4); // it will return 1

    // displaying index
    cout << index << endl;

    // Taking input
    a.getBinary();

    // calling copy constructor
    // and using assignment operator
    b = a;
    Binary d(a);

    // displaying all the values
    cout << a.getA() << endl;
    cout << a.getB() << endl;
    cout << b.getA() << endl;
    cout << b.getB() << endl;
    cout << d.getA() << endl;
    cout << d.getB() << endl;


}