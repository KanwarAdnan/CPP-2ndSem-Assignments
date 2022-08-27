/*

    Write a template function that returns the average of all the elements of an array. The arguments to the function should be the array name and the size of the array (type int).
    In main(), exercise the function with arrays of type int, long, double, and char.

*/
#include <iostream>
using namespace std;

template <typename T>
T average(T* array, int size)
{
    T total = 0;
    for(int i = 0 ; i < size ; i++){
        total += array[i];
    }
    return (total/size);
}

int main(){
    float x[2] = {1,2};
    cout << average(x,2);

}