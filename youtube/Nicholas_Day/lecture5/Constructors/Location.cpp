#include "Location.h"

Location::Location(){}
Location::Location(int x, int y, int z):x(x), y(y), z(z){}

void Location::Set(int x, int y, int z){
    x = x;
    y = y;
    z = z;
}

void Location::Display(){
    cout << "\n[ " << x << " , "
        << y << " , "
        << z << " ]\n";
}
