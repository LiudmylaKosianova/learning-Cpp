#include "GameObject.h"



int main(){

    // GameObject obj1;
    // cout << obj1.id << "\n";
    GameObject obj2(45);
    cout << obj2.id << "\n";
    GameObject obj3(7);
    GameObject obj4(97);
    cout << GameObject::instances << "\n";


    return 0;
}