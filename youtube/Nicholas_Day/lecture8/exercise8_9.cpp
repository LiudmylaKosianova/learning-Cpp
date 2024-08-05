#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b){
    return (a > b)? a : b;
}
template <typename T, typename Y>
void DisplayArray(T array, Y size){
    cout << "Array: ";
    for(int i = 0; i < size; i++){
        cout << " " << array[i];
    }
    cout << "\n";
}
template <typename T, typename Y>
T SumArray(T* array, Y size){
    T sumA = 0;
    cout << "Array sum: ";
    for(int i = 0; i < size; i++){
        sumA += array[i];
    }
    cout << sumA << "\n";
    return sumA;
}

int main(){

    int arrI[5] = {1, 2, 3, 4, 5};
    float arrF[5] = {1.11, 2.22, 3.33, 4.44, 5.55};
    DisplayArray(arrI, 5);
    SumArray(arrI, 5);
    DisplayArray(arrF, 5);
    SumArray(arrF, 5);

    return 0;
}