#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

// #define XBOX
// #undef XBOX

// #ifdef XBOX
//         state = controller.getState()
// #else
//         state = keyboard.getState()
// #endif


int main(){

    /*
    rand() returns a number in the range 0 - RAND_MAX.
    RAND_MAX defined in <cstdlib> usually 32767
    */

   srand(time(NULL));
   int number = rand() % 10;

   enum myFood{Berry, Apple, Melon};
   
   myFood today = Apple;
   cout << "Today the fod is " << today << endl;


    return 0;
}