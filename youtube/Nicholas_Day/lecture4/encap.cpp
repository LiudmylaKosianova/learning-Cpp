#include <iostream>
using namespace std;

/*
ENCAPSULATION
getters (accessors)/setters(mutators)

type FunctionName()const{} <- this is getter (accessor)
*/

/*
ABSTRACT MEMBER FUNCTION

virtual type MemeberFunctionName()=0;

if declerad within the class, the class cannot be instantiated
only child classes that implement virtual memeber function can be instantiated

*/

/*
FILE: date.h
class Date{
private:
    int year;
    int day;
public:
    Date(int day, int year);
    void SetDate(int day, int year);
}
FILE: date.cpp
#include "Date.h"
Data::Date(int day, int year){
day = day;
year = year;
}
void Date::SetDate(int day, int year){
day = day;
year = year;
}
*/

int main(){

    return 0;
}