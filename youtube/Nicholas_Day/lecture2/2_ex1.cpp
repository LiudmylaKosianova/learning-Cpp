#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

#define TEST_SUM

int main(){

    int scores[100];
    srand(time(NULL));

    for(int i = 0; i < 100; i++){
        int number = rand() % 101;
        scores[i] = number;
    }    

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

    #ifdef TEST_SUM
        int sum = 0;
        for(int i = 0; i < 4; i++){
            sum += ranges[i];
        }
        switch(sum){
            case 100:
                cout << "The test is passed" << "\n";
                break;
            default:
                cout << "The test is failed" << "\n";
                cout << "The sum of ranges is " << sum << "\n";
        }

    #endif

     



    return 0;
}