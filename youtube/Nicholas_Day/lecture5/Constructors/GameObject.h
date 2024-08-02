#include <iostream>
using namespace std;

class GameObject{
public:
    static int instances;
    int id;
    GameObject()=delete;
    GameObject(int id);
};