#include <iostream>
using namespace std;

class Matrix{
    private:
        int noOfRows;
        int noOfColumns;
        int** data;

    public:
        Matrix(int noOfRows, int noOfColumns); // If rows> 0
        void displayData();
        ~Matrix();
        Matrix(const Matrix& ref);
        void alloc(); // for allocation of matrix, if rows > 0
        void fill(); // for filling numbers 
};

/*
    As given in statement we need number of rows and columns to be greater than 0
    so we used if and else here.
    if the condition is satisfied then make a pointer of pointer(array) of length = Number of Rows

    then assign array(pointer)(Number of columns) to each index of that pointer
*/

Matrix::Matrix(int noOfRows , int noOfColumns){
    if ((noOfRows) > 0){
        this-> noOfRows = noOfRows;
        this-> noOfColumns = noOfColumns;

        data = new int*[noOfRows];

        for(int i = 0; i < noOfRows; i++)
            data[i] = new int[noOfColumns];
    }
    else {
        this-> noOfRows = 0;
        this-> noOfColumns = 0;
    }
}

/*
    first of all we don't need to compare whether Number of rows equal to zero or not because it's copy contructor
    then we'll need to do the first step (allocating memory to **data) after it we'll need to copy the data of reference
    passed by the user to our **data pointer of pointer.
*/

Matrix::Matrix(const Matrix& ref){
    // Assigning values of reference to the new object
    noOfRows = ref.noOfRows;
    noOfColumns = ref.noOfColumns;

    // Assigning array equal to number or rows to data
    data = new int*[noOfRows];

        // allocating memory to the data (it's array in array)
        for(int i = 0; i < noOfRows; i++)
            data[i] = new int[noOfColumns];

        
        // copying the values of reference object to the data
        for(int i = 0 ; i < noOfRows ; i++){
            for(int j = 0 ; j < noOfColumns ; j++){
                data[i][j] = ref.data[i][j]; // that's how you access the values of 2d arrays
            }
        }
}

// displaying what's inside the array
void Matrix::displayData(){
    for(int i = 0 ; i < noOfRows ; i++){
        for(int j = 0 ; j < noOfColumns ; j++)
            cout << data[i][j] << ' ';
        cout << '\n';
    }

}

// de-allocating
Matrix::~Matrix(){
    for(int i = 0 ; i < noOfRows ; i++)
        delete[] data[i];
    delete[] data;
}

int main(){
    Matrix m(3,3);
    m.displayData();

    cout << "\n";

    Matrix q(m);
    m.displayData();
    system("pause");
    // Calling destructor
    m.~Matrix();
    q.~Matrix();

    return 0;
}