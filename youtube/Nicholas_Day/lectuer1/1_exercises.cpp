#include <iostream>
#include <time.h>
#include "1_myVars.h"

using namespace std;

namespace FirstJob{
    int salary = 20000;
}
namespace SecndJob{
    int salary = 15000;
}


int main(){

    //E 1 and 2
    // string name = "";
    // int age = 0;

    // cout << "What is your name? ";
    // cin >> name;
    // cout << "How old are you? ";
    // cin >> age;
    // const int days = 365;

    // cout << "Information received. Name: " << name << " age: " << age*days << " days old" << endl;

    //E 3 and 4
    // int age2 = 10;
    // int * pAge2 = &age2;
    // int& ref_age2 = age2;
    // cout << "age2 = " << age2 << "\n";
    // cout << "*pAge2 = " << *pAge2 << "\n";
    // cout << "ref_age2 = " << ref_age2 << "\n";

    // cout << "&age2 = " << &age2 << "\n";
    // cout << "pAge2= " << pAge2 << "\n";

    //E 5
    cout << FirstJob::salary << " and " << SecndJob::salary << endl;
    cout << mySurname << endl;
    cout << mySurname.length() << " " << mySurname[0] << " " << mySurname[mySurname.length() - 1] << endl;

    //E 9

    __time32_t justTime;//empty variable for storing time data
    struct tm infoTime;//empty struct of type tm
    char toString[32];
    //pass the 'justTime' by reference to the function '_time32', so it can be populated with data
    _time32(&justTime); //the data = number of seconds passed since 01 01 1970
    _localtime32_s(&infoTime, &justTime); //populate the struct tm 'infoTime' with data (month, day, year ...)
    asctime_s(toString, 32, &infoTime);

    cout << infoTime.tm_hour <<":"<<infoTime.tm_min<<":"<<infoTime.tm_sec<<endl;
    cout<<justTime<<endl;
    







    




    return 0;
}