#include <iostream>
using std::cout;
using std::endl;


int main(void){

    // int aInt = 5;
    // float aFloat = 5E3;
    // cout << sizeof(aInt) << endl;
    // cout << aFloat << endl;

    //variants of the while loop
    short count1 = 3, count2 = 3, count3 = 3;
    

    while(count1 != 0){
        cout << "I am in a count1 loop!" << endl;
        count1 --;
    }
    while(count2){
        cout << "I am in a count2 loop!" << endl;
        count2 --;
    }
    while(count3--){
        cout << "I am in a count3 loop!" << endl;
    }


    return 0;
}