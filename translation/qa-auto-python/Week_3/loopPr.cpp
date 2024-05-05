#include <iostream>

int main(){

    /*Задача 1.
Напишіть програму-таймер зворотного відліку, яка запитує у користувача кількість
секунд n, з якої слід починати відлік.*/
    int startC;
    std::cout<<"Seconds: ";
    std::cin >>startC;
    std::cout<<"Countdown...\n";
    while(startC>=1){
        std::cout<<startC<<'\n';
        startC--;
    }

    /*Задача 2.
Надрукувати всі цілі числа від a до b включно, кратні деякому числу c. Числа a, b, c -
цілі числа, які вводить користувач.*/
    int a, b, c, count;
    std::cout<<"a: ";
    std::cin >>a;
    std::cout<<"b: ";
    std::cin >>b;
    std::cout<<"multiples of: ";
    std::cin >>c;
    for(int i=a; i<=b; i++){
        if(i%c == 0){
            std::cout<<i<<' ';
            count++;
        }
    }
    std::cout<<"\nThere are "<<count<<" multiples of "<<c<<'\n';

    /*Задача 3.
Напишіть програму, яка друкує всі непарні числа з інтервалу [1, b], де b - ціле число,
яке вводить користувач. Не можна використовувати конструкцію розгалуження.*/
    int finish;
    std::cout<<"Finish at: ";
    std::cin >>finish;
    for(int i=1; i<=finish; i+=2){
        std::cout<<i<<' ';
    }
    
    /*Задача 4.·
Задане ціле додатне число n, обчислити значення факторіалу цього числа n! -.
Приклад: 5! = 1 · 2 · 3 · 4 · 5 = 120*/
    int myNumber, factorial=1;
    std::cout<<"Number: ";
    std::cin >>myNumber;
    for(int i=1; i<=myNumber; i++){
        factorial*=i;
    }
    std::cout<<"Factorial is "<<factorial<<'\n';


    return 0;
}