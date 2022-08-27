/*

    We are going to create class Matrix.

*/

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
