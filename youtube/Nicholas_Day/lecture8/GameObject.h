#pragma once
#include <iostream>
using namespace std;

class GameObject{
private:
    int id;
    int position[3];
public:

    GameObject(int id, int x, int y, int z):id(id){
        position[0] = x;
        position[1] = y;
        position[2] = z;
    }

    int* Move(int x, int y, int z){
        position[0] = x;
        position[1] = y;
        position[2] = z;
        return position;
    }

    void Draw(){
        cout << "GameObject, id: " << id << endl;
        cout << "My location: " << position[0] <<
                                ", " << 
                                position[1] <<
                                ", " << 
                                position[2] <<
                                " \n";
                                
    }
};
