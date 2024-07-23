#include <iostream>
using namespace std;

int maint(){

    /*
    returnValue = (condition) ? result1 : result2;
    */

   int smalest;
   int x = 117, y = 523;

   smalest = (x < y) ? x : y;
   
   cout << smalest << endl;

    return 0;
}