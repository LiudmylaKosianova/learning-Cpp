#include "GameObject.h"

int main(){

    GameObject point(703, 0,0,0);
    void (GameObject::*dr)();
    dr = &GameObject::Draw;
    (point.*dr)();

    int* (GameObject::*m)(int, int, int);
    m = &GameObject::Move;
    int *myLocation = (point.*m)(1,2,3);
    cout << "My new location: ";
    cout << myLocation[0] << ", "<< myLocation[1] <<", "<< myLocation[2] << endl;


    return 0;
}