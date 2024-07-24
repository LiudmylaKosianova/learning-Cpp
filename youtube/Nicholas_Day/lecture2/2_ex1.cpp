#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){

    int scores[100];
    srand(time(NULL));

    for(int i = 0; i < 100; i++){
        int number = rand() % 101;
        scores[i] = number;
    }

    // for(int i = 0; i < 7; i++){
    //     cout << "scores " << i << " is " << scores[i] << "\n";
    // }

    int ranges[4] = {0,0,0,0};

    int *novice = ranges, *intermediate = &ranges[1], *advanced = &ranges[2], *hardcore = &ranges[3];
    int c = 0;


    for(int i = 0; i < 100; i++){
        c = scores[i];

        if(c <= 40)(*novice)++;        
        else if(c <=60) (*intermediate)++;
        else if(c <= 80) (*advanced)++;
        else (*hardcore)++;
    }

    for(int i = 0; i < 4; i++){
        cout << ranges[i] << endl;
    }

     



    return 0;
}