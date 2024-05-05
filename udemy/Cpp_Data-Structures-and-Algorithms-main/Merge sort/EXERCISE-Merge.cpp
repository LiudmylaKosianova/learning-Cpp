#include <iostream>

using namespace std;


	// CREATE MERGE FUNCTION HERE //
	void merge(int ar[], int lIndex, int mIndex, int rIndex){
        int leftArraySize = mIndex - (lIndex+1);
        int rightArraySize = rIndex - (mIndex);

        int leftArr[leftArraySize];
        int rightArr[rightArraySize];

        for(int i=0; i<leftArraySize; i++){
            leftArr[i] = ar[lIndex+1];
        }
        for(int j=0; j<rightArraySize; j++){
            rightArr[j] = ar[mIndex+1+j];
        }

        int index=0, i=0, j=0;
        while(i<leftArraySize && j<rightArraySize){
            if(leftArr[i] <= rightArr[j]){
                ar[index] = leftArr[i];
                i++;
                index++;
            }else{
                ar[index] = rightArr[j];
                index++;
                j++;
            }
        }

        while(i<leftArraySize){
            ar[index] = leftArr[i];
            i++;
            index++;
        } 
        while (j<rightArraySize){
            ar[index] = rightArr[j];
            j++;
            index++;
        }
    }
 
 
int main() {
    
    int myArray[] = {1,3,7,8,2,4,5,6};

    int size = sizeof(myArray) / sizeof(myArray[0]);
    int leftIndex = 0;
    int rightIndex = size - 1;
    int midIndex = (size / 2) - 1;


    merge(myArray, leftIndex, midIndex, rightIndex);


    for (auto value : myArray) {  
        cout << value << " ";
    }
    
    /*
        EXPECTED OUTPUT:
        ----------------
        1 2 3 4 5 6 7 8 
        
     */

}

