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
int main(){

    int theMark = 55;
    //AdjustMark2(theMark, true);
    AdjustMark4(&theMark, true);
    cout << "theMark = " << theMark << "\n";


    return 0;
}

