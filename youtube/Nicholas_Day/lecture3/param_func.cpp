#include <iostream>
using namespace std;

//passing parameters by value -> you do not change the value of the variable passed
    void AdjustMark1(int mark, bool late){
        if(late && (mark > 40)){mark = 40;}
    }
//passing parameters by reference -> you do change the value
    void AdjustMark2(int & mark, bool late){
        if(late && (mark > 40)){mark = 40;}
    }
//passing by constant reference -> does not change the value of the variable, since it will be treated as a constant variable
//    void AdjustMark3(const int mark, bool late){
//         if(late && (mark > 40)){mark = 40;}
//     }
 
//passing by pointer -> works the same as passing by reference
void AdjustMark4(int * mark, bool late){
        if(late && (*mark > 40)){*mark = 40;}
    }

//passing arrays as parameters

void Display1(int * data, int size){
    for(int i = 0; i < size; i++){
        cout << i << " number: " << data[i] << "\n";
    }

}

void Display2(int data[][4], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << " number: " << data[i][j] << "\n";
        }       
    }
}

//default paramethers, should be the last
float TaxCalc(float income, float tax = 0.20){
    return income - (income * tax);
}


int myMarks[4][4];


int main(){

    int theMark = 55;
    //AdjustMark2(theMark, true);
    // AdjustMark4(&theMark, true);
    // cout << "theMark = " << theMark << "\n";

    // int marks[] = {25, 45, 75};
    // Display1(marks, 3);
    // Display2(myMarks, 4);

    /*
    const int * age -> the value, that the pointer points to cannot be changed
    int const * age -> the pointer is constant, not the value it points to, the pointer constantly points to a variable))
    */
   cout << TaxCalc(2200) << "\n";
   cout << TaxCalc(4400, 0.38) << "\n";


    return 0;
}

