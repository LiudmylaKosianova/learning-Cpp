#include <iostream>
#include <string.h>
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

/*
Constructor of the class
*/

class Player{
public:
    int number;
    string name;
    Player(int pNumber, string pName){
        number = pNumber;
        name = pName;
    }

};

/*
alternative syntax for constructor
class Player{
public:
    int number;
    string name;
    Player(int pNumber, string pName):number(pNumber),name(pName){}
    }

};
*/

/*
class Name{
public:
    statements;
private:
    statements;
protected:
    statements;
};
*/

int main(){
    BasicPlayer myBasicPlayer; //it has a default constructor and can be declared like this
    Player myPlayer(7, "Flamingo");
    

    return 0;
}


