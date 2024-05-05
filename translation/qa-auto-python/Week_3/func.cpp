#include <iostream>
#include <string>

/*Задача 1.
Напишіть функцію, яка приймає ціле число і друкує інформацію про парність чи
непарність числа.*/
void evenOdd(int n);
/*Задача 2.
Напишіть функцію яка перевірятиме чи введений рік високосний.*/


int main(){

    return 0;
}
void evenOdd(int n){
    std::string answer;
    if(n%2==0){
        answer="even\n";
    }else{
        answer="odd\n";
    }
    std::cout<<answer;

}