#include <iostream>
#include <iomanip>
#include <string>

int main(){

    /*Задача 5.
Користувач вводить кількість навчальних предметів n, а потім оцінки учня з цих
предметів. Визначте середню оцінку.*/
    // int n, grade, i, count;
    // float avr;
    // std::cout<<"Subjects: ";
    // std::cin >>n;
    // i = n;
    // count = n;
    // while(i!=0){
    //     std::cin>>n;
    //     grade+=n;
    //     i--;
    // }
    // avr = grade/count;
    // std::cout<<std::fixed<<std::setprecision(2)<<avr<<'\n';

    /*Задача 6.
На склад привозять однорідний вантаж на машинах різної вантажопідйомності.
Користувач вводить інформацію про вагу вантажу чергової машини. Скласти програму
підрахунку кількості машин, які прибули на склад до його заповнення, якщо місткість
складу не більше 100 тонн*/
    // int weight, countW=0, sumW = 0;
    // std::cout<<"Weight: ";
    // std::cin >>weight;
    // while(sumW+weight<=100){
    //     sumW+=weight;
    //     countW++;
    // }     
    //std::cout<<countW<<'\n';

    /*Задача 7.
Створити цикл, який виводить на екран парні числа починаючи з 0, поки не дійде до
твого віку, якщо вік є парним числом, або виводить непарні числа починаючи з 1, поки
не дійде до твого віку, якщо вік є непарним числом.*/
    // int age;
    // std::cout<<"Age: ";
    // std::cin >>age;
    // if(age%2==0){
    //     for(int i=0; i<=age; i+=2){
    //         std::cout<<i<<' ';
    //     }
    // }else{
    //     for(int i=1; i<=age; i+=2){
    //         std::cout<<i<<' ';
    //     }
    // }

    /*Задача 8.
Напишіть програму для друку цілих чисел від n до 0 із виведенням біля кожного числа
кількості символів #, що дорівнює значенню числа.*/
    // int n;
    // std::cout<<"Number: ";
    // std::cin >>n;
    // for(int i=n; i>=0; i--){
    //     std::cout<<i<<' ';
    //     std::cout<<std::string(i, '#')<<'\n';
    // }

    /*Задача 9.
З клавіатури вводять число. Вивести всі його цифри*/
    // int n, number, divider = 1;
    // std::cout<<"Number: ";
    // std::cin >>n;
    // number = n;
    // while((number/10)>0){
    //     number/=10;
    //     divider*=10;
    // }
    // while(divider>0){
    //     number=n/divider;
    //     std::cout<<number<<'\n';
    //     n%=divider;
    //     divider/=10;        
    // }
    /*Задача 10.
Перевірити, чи введене число просте.*/
    int n, flag=1;
    
    std::cout<<"Number: ";
    std::cin >>n;
    
    for(int i=n-1; i>1; i--){
        if((n%i)==0){
            flag=0; 
            break;         
        }
    }
    std::cout<<flag<<'\n';
    return 0;
}