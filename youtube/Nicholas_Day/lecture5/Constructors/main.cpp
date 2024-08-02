#include "GameObject.h"



int main(){

    // GameObject obj1;
    // cout << obj1.id << "\n";
    GameObject obj1(45, new Location(1,1,1));
    cout << obj1.id << "\n";
    GameObject obj2(7, new Location(2,2,2));
    GameObject obj3(97, new Location(3,3,3));
    cout << GameObject::instances << "\n";
    obj3.location->Display();


    return 0;
}