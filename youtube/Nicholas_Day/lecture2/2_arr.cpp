#include <iostream>
using namespace std;

int main(){

    int marks[5];
    marks[0] = 12;
    marks[3] = 10;
    marks[4] = 11;

    for (int i = 0; i < 5; i++){
        cout << "mark is " << marks[i] << "\n";
    }

    /*pointers
      *arrayName = arrayName[0]
      *(arrayName + 2) = go to the two addresses from the beginning, not add 1 to the address!
      *(arrayName + 1) = arrayName[1] 
      *(arrayName + 2) = arrayName[2]
    */

    for(int i = 0; i < 5; i++){
        cout << "mark is " << *(marks + i) << "\n"; 
    }
    return 0;
}

