#include <iostream>
using namespace std;

/*
like in C language
struct Name{
    statements;
};
*/

/*
STATIC OBJECTS 
static -> created on the stack

Classname identifier;
Classname identifier();
identifier.memeberFunction();

*/

/*
DYNAMIC OBJECTS

dynamic -> stored on the heap

Classname *identifier;
identifier = new Classname();
identifier->memberFunction();
*/

/*
PASS OBJECTS AS POINTERS

void Display(Player * p){
        cout << p->name << endl;
}

Player myPlayer = new Player();
Display(myPlayer);
*/

int main(){

    return 0;
}