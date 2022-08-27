#include "matrix.h"

void Matrix::alloc(){ // just to save time
    if ((noOfRows) > 0){
        data = new int*[noOfRows];

        for(int i = 0; i < noOfRows; i++)
            data[i] = new int[noOfColumns];
    }
}

Matrix::Matrix(const Matrix& ref){
    noOfRows = ref.noOfRows;
    noOfColumns = ref.noOfColumns;

    if (noOfRows > 0) {
        alloc(); // just to save time

        for(int i = 0 ; i < noOfRows ; i++){
            for(int j = 0 ; j < noOfColumns ; j++){
                data[i][j] = ref.data[i][j];
            }
        }
    }
}

void Matrix::fill(){ // Not included in question
    for(int i = 0 ; i < noOfRows ; i++){
        for(int j = 0 ; j < noOfColumns ; j++){
            data[i][j] = i+j;
        }
    }
}

Matrix::Matrix(int noOfRows , int noOfColumns){
    this-> noOfRows = noOfRows;
    this-> noOfColumns = noOfColumns;

    alloc();

    fill(); // not included in question

}

void Matrix::displayData(){
    for(int i = 0 ; i < noOfRows ; i++){
        for(int j = 0 ; j < noOfColumns ; j++)
            cout << data[i][j] << ' ';
        cout << '\n';
    }

}

Matrix::~Matrix(){
    for(int i = 0 ; i < noOfRows ; i++)
        delete[] data[i];
    delete[] data;
}