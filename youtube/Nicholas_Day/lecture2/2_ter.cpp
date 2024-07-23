#include <iostream>
#include <string>
using namespace std;

int main(){

    
    /*
    returnValue = (condition) ? result1 : result2;
    */

   int x = 213, y = 782;
   int smallest;
   smallest = (x < y) ? x : y;
   cout << smallest << endl;

   /*switch*/
   int number = 100;

   switch(number){
    case 11 : cout << "The number should not be 11"<< endl;
                      break;
    case 114: cout <<"The number should not be 114"<< endl;
                      break;
    default: cout <<"The number is 100"<< endl;
   }

    return 0;
}