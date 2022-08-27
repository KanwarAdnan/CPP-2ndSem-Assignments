#include <iostream>
using namespace std;

class Algebra{
private:
    int a,b;
public:
    Algebra(){
        a = 0;
        b = 0;
    }

    Algebra(const Algebra& ref){
        a = ref.a;
        b = ref.b;
    }

    void setA(int a){ this -> a = a;}
    void setB(int b){ this -> b = b;}
    int getA()      { return a; }
    int getB()      { return b; }


    void putData(){
        cout << "\nEnter the value for A : ";
        cin >> a;

        cout << "\nEnter the value for B : ";
        cin >> b;

        cout << '\n';
    }

    Algebra &operator=(const Algebra temp){
        a = temp.a;
        b = temp.b;
    }

    friend ostream &operator<<(ostream& out , Algebra temp){
        out << "\nValue of A : " << temp.a;
        out << "\nValue of B : " << temp.b;
        out << '\n';

        return out;
    }

    Algebra operator+=(Algebra temp){
        Algebra temp2;

        temp2.a = a + temp.a;
        temp2.b = b + temp.b;

        return temp2;
    }

    Algebra operator-(Algebra temp){
        Algebra temp2;

        temp2.a = a - temp.a;
        temp2.b = b - temp.b;

        return temp2;
    }

    // Unary + operator overloading
    bool operator+(){ return (a >= 0 && b>=0); }

    int getEqualIndex(Algebra *array , int size){
        int count = 0 ;
        for( int i = 1 ; i < size + 1  ; i++){
            if ( (array[i - 1].a == array[i].a) && (array[i - 1].b == array[i].b) ){
                count++;
            }
        }
        return count;
    }

};

int main(){
    Algebra a,b,c;
    Algebra array[4];

    // setting values

    array[0].setA(0);
    array[0].setB(0);

    // 1,2,3 index have the same values
    array[1].setA(1);
    array[1].setB(1);
    array[2].setA(1);
    array[2].setB(1);

    array[3].setA(1);
    array[3].setB(1);

    // calling the function
    int count = a.getEqualIndex(array,4); // it will return 1

    // displaying count
    cout << count << endl;

    // Taking input
    a.putData();

    // calling copy constructor
    // and using assignment operator
    b = a;
    Algebra d(a);

    // displaying all the values
    cout << a.getA() << endl;
    cout << a.getB() << endl;
    cout << b.getA() << endl;
    cout << b.getB() << endl;
    cout << d.getA() << endl;
    cout << d.getB() << endl;


}