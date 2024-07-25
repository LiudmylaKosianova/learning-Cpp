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
    cout << state << "\n";
    


    return 0;
}