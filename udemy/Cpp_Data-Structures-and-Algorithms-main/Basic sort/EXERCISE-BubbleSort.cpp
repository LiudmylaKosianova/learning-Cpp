#include <iostream>

using namespace std;


	// CREATE BUBBLESORT FUNCTION HERE //
	void bubbleSort(int ar[], int size){
        for(int i=size-1; i>0; i--){
            for(int j=0; j<i; j++){
                if(ar[j] > ar[j+1]){
                    ar[j] = ar[j]^ar[j+1];
                    ar[j+1]= ar[j]^ar[j+1];
                    ar[j] = ar[j]^ar[j+1];
                }
                
            }
        }
    }


int main() {
    
    int myArray[] = {6,4,2,5,1,3};

    int size = sizeof(myArray) / sizeof(myArray[0]);


    bubbleSort(myArray, size);


    for (auto value : myArray) {  
        cout << value << " ";
    }

    /*
        EXPECTED OUTPUT:
        ----------------
        1 2 3 4 5 6 
        
     */
    
}

