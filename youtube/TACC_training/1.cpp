#include <iostream>

using std::cout;
using std::endl;

/*void function, swaps two parameters, 
  parameters are references, not the addresses, like in C
*/
void swapInt(int &first, int &second){
    first = first^second;
    second = first^second;
    first = first^second;
}
/*default parameters should come last*/
double addTwo(double a, double b=0){
  return a + b;
}

int main(void)
{
    int a = 5;
    int b = 7;
    swapInt(a, b);
    cout << "a=" << a << "b=" << b << endl;
    int myInt = 7;
    float myFloat = 7; // why doesn't compiler complain about "7" (not "7.0") as a float?
    cout << myInt << " " << myFloat << endl;
    return 0;
}