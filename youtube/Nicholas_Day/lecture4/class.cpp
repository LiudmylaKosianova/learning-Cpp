#include <iostream>
using namespace std;


/*
function can be declared and defined within a class (Hello function),
or declared within a class and defined elsewhere(GoodBye function)
 */

class BasicPlayer{
    int size;
    void Hello(){
        cout << "Hello\n";
    }
    void GoodBye();
};

void BasicPlayer::GoodBye(){
    cout << "Good bye\n";
}

