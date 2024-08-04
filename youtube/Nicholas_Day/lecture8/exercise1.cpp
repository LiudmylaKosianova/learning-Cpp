#include <iostream>
#include <string>
using namespace std;

void HelloM(){
    cout << "Hello!\n";
}
void GoodbyeM(){
    cout << "Goodbye!\n";
}
void Message(const string m){
    cout << m << endl;
}

int main(){

    void (*ptrFun)();
    ptrFun = HelloM;
    ptrFun();
    ptrFun = GoodbyeM;
    ptrFun();
    void (*ptrFun2)(string);
    ptrFun2 = Message;
    ptrFun2("Flamingo");
    
    return 0;
}

