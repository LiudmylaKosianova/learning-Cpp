#include <iostream>

using namespace std;


void swap(int array[], int firstIndex, int secondIndex) {
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}


int pivot(int array[], int pivotIndex, int endIndex) {
    int swapIndex = pivotIndex;
    for (int i = pivotIndex + 1; i <= endIndex; i++) {
        if (array[i] < array[pivotIndex]) {
            swapIndex++;
            swap(array, swapIndex, i);
        }
    }
    swap(array, pivotIndex, swapIndex);

    return swapIndex;
}


	// CREATE QUICKSORT FUNCTION HERE //
void quickSort(int ar[], int leftI, int rightI){
    if(leftI >= rightI)return;
    int pivotI = pivot(ar, leftI, rightI);
    quickSort(ar,leftI, pivotI-1);
    quickSort(ar,pivotI+1, rightI);
}



int main() {
    
    int myArray[] = {4,6,1,7,3,2,5};

    int size = sizeof(myArray) / sizeof(myArray[0]);


    quickSort(myArray, 0, size-1);


    for (auto value : myArray) {  
        cout << value << " ";
    }
    
    /*
        EXPECTED OUTPUT:
        ----------------
        1 2 3 4 5 6 7 
        
     */

}

