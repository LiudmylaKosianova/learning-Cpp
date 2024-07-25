/*
State Machine, that enforce the legal movement transition for a character
*/

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){

    enum m_s {stand, walk, run, crawl};
    srand(time(NULL));
    m_s state = (m_s)(rand()%4);
    cout <<"State is " << state << "\n";
    
    switch(state){
        case 0: cout << "You are standing. Next you can walk (1) or crawl (3)\n";
                break;
        case 1: cout << "You are walking. Next you can stand (0) or run (2)\n";
                break;
        case 2: cout << "You are running. Next you can walk (1)\n";
                break;
        default:cout << "You are crawling. Next you can stand (0)\n";
                break;
    }


    return 0;
}