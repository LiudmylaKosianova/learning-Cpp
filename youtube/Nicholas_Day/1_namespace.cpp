#include <iostream>
#include <string>
//using namespace std;

namespace myTenA{
    int a = 10;
}

namespace mySevenA{
    int a = 7;    
}

typedef float DecimalPoint;

int main(){

    int c = myTenA::a + mySevenA::a;
    std::cout << "c = " << c << std::endl;

    using myTenA::a;
    int c2 = a;
    std::cout << "c2 = " << c2 << std::endl;

/* typedef */
    DecimalPoint myFloat = 1.097;
    std::cout << "myFloat = " << myFloat << std::endl;

    /*explicit assignment*/

    int age = 21;

    /*implicit assignment*/

    int age2(21);

    /*strings*/

    

    std::string myWords = "It is a hot summer day";
    char firstLetter = myWords[0];

    /*constants*/
    int age3;
    age3 = 791;
    const int RETIRE_AGE = 67;

    std::cout << &age3 << std::endl;

    int * ptr_age3 = &age3;

    std::cout << ptr_age3 << std::endl;
    std::cout << *ptr_age3 << std::endl;

    

    return 0;
}