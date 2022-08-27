#include "matrix.cpp"

int main(){
    Matrix m(3,3);
    m.displayData();

    cout << "\n";

    Matrix q(m);
    m.displayData();
    system("pause");
    // Calling destructor
    m.~Matrix();

    return 0;
}