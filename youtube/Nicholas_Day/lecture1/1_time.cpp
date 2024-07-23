#include <time.h>
#include <iostream>
using namespace std;

int main(){

    __time32_t rawtime;
    struct tm timeinfo;
    char buffer[32];
    _time32(&rawtime);
    _localtime32_s(&timeinfo, &rawtime);
    asctime_s(buffer, 32, &timeinfo);

    cout << "The current time is " << buffer << endl;


    return 0;
}