#include <iostream>

using namespace std;


	// CREATE SELECTIONSORT FUNCTION HERE //
	void selectionSort(int ar[], int size){
        for(int i=0; i<size; i++){
            int minIndex = i;
            for(int j=i+1; j<size; j++){
                if(ar[minIndex] > ar[j]){
                    minIndex = j;
                }
            }
            if(minIndex != i){
                ar[i] = ar[i]^ar[minIndex];
                ar[minIndex] = ar[i]^ar[minIndex];
                ar[i] = ar[i]^ar[minIndex];
            }
        }
    }



int main() {
    
    int myArray[] = {6,4,2,5,1,3};

    int size = sizeof(myArray) / sizeof(myArray[0]);


    selectionSort(myArray, size);


    for (auto value : myArray) {  
        cout << value << " ";
    }

    /*
        EXPECTED OUTPUT:
        ----------------
        1 2 3 4 5 6 
        
     */
    
}

