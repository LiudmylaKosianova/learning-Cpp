#include <iostream>
#include <iomanip>

int main(){

    /*Задача 1.
Створіть програму визначення вартості дзвінка по телефону. Ціна за хвилину розмови
2.30 грн. У суботу та у неділю надається знижка 20%.
    */
    int day = 0, time = 0;
    float price = 2.30, cost = 0.0;
    std::cout << "Day number: ";
    std::cin  >> day;
    std::cout << "Time: ";
    std::cin  >> time;
    if(day == 6 || day == 7){
        price *= 0.8;
    }
    cost = price*time;
    std::cout << "Cost "<<std::fixed<<std::setprecision(2)<< cost<<'\n';

    /*Задача 2.
Напишіть програму яка перевіряє, чи є введене число додатним, від’ємним або це
нуль.*/
    int number = 0;
    std::cout << "Number: ";
    std::cin  >> number;
    if(number < 0){
        std::cout << "Number " << number << " is negative\n";
    }else if(number > 0){
        std::cout << "Number " << number << " is positive\n";
    }else{
        std::cout << "Number " << number << " is zero\n";
    }

    /*Задача 3.
Напишіть програму, на вхід якої подається два цілих числа - вік Сашка і вік Тетянки.
Програма має вивести повідомлення про те, хто є старшим серед них.*/
    int ageS, ageT;
    std::cout << "Sashko ";
    std::cin  >> ageS;
    std::cout << "Tetianka ";
    std::cin  >> ageT;
    if((ageS - ageT) < 0){
        std::cout << "Tetianka is older\n";
    }else if((ageS - ageT) > 0){
        std::cout << "Sashko is older\n";
    }else{
        std::cout << "They are the same age\n";
    }

    /*Задача 4.
Підприємство набирає робітників у штат. Умова прийому потребує не менше 5 років
робочого стажу та вік не більше 40 років. Створіть програму, яка перевіряє, підходить
кандидатура по цим параметрам чи ні.*/
    int age, exp;
    std::cout << "Age: ";
    std::cin  >> age;
    std::cout << "Experience: ";
    std::cin  >> exp;
    if((exp>=5) && (age<=40)){
        std::cout << "Canditate may get the job\n";
    }else if ((exp>=5) && (age>40)){
        std::cout << "Candidate will sue the company for being terrible ageists\n";
    }

    /*Задача 5.
Дано три числа a, b, c. Змінній m присвоїти значення найбільшого з трьох чисел.*/
    int a, b, c, m;
    std::cout << "a: ";
    std::cin  >> a;
    std::cout << "b: ";
    std::cin  >> b;
    std::cout << "c: ";
    std::cin  >> c;
    if(a<b){
        a = b;
    } 
    if(a<c){
        a = c;
    }
    m = a;
    std::cout << "m="<<m<<'\n';

    
    return 0;
}