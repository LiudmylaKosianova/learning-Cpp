#include "GameObject.h"


int GameObject::instances = 0;
// GameObject::GameObject():id(0){}
GameObject::GameObject(int id, Location * location):id(id), location(location) {
    instances++;
}