#include <iostream>
using namespace std;
#include "Location.h"

class GameObject{
public:
    static int instances;
    int id;
    Location * location;
    GameObject()=delete;
    GameObject(int id, Location * location);
};