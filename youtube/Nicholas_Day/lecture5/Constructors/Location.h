#include <iostream>
using namespace std;

class Location{
public:
    int x, y,z;
    Location();
    Location(int x, int y, int z);
    void Set(int x, int y, int z);
    void Display();

};