#include <iostream>

namespace myTenA{
    int a = 10;
}

namespace mySevenA{
    int a = 7;    
}

int main(){

    int c = myTenA::a + mySevenA::a;
    std::cout << "c = " << c << std::endl;

    using myTenA::a;
    int c2 = a;
    std::cout << "c2 = " << c2 << std::endl;



    return 0;
}