#include <iostream>
#include <iomanip>
#include <string>

int main(){

    /*Задача 6.
Напишіть програму, в якій користувач вводить значення температури в градусах
Цельсія, і, якщо це значення менше або дорівнює 0, необхідно вивести повідомлення
“A cold, isn’t it?”. Якщо ж температура становить більше 0 і менше 10 градусів Цельсія
повідомлення буде “Cool”, у інших випадках “Nice weather we’re having”.*/
    int temp = 0;
    std::cout << "Temperature in Celsius: ";
    std::cin  >> temp;
    if(temp <= 0){
        std::cout << "It's cold, isn't it?\n";
    }else if((temp > 0) && (temp<=10)){
        std::cout << "Cool weather\n";
    }else{
        std::cout << "The weather is nice\n";
    }

    /*Задача 7.
Відомі дві швидкості: одна задана в кілометрах за годину, інша - в метрах за секунду.
Яка з швидкостей більша?*/
    float speed1, speed2;
    std::string answer;
    std::cout << "Speed km/hour: ";
    std::cin  >> speed1;
    std::cout << "Speed m/sec: ";
    std::cin  >> speed2;
    speed1 = speed1 * 1000/3600;
     
    if(speed1 > speed2){
       answer = "First speed is higher\n"; 
    }else if (speed1 == speed2){
        answer = "Speeds are the same\n";
    }else{
        answer = "Second speed is higher\n";
    }
    std::cout << answer<<'\n';

    /*Задача 8.
Напишіть програму, яка запитує два цілих числа. Якщо добуток чисел перевищує їх
суму, надрукувати добуток чисел, у протилежному випадку - вивести їх суму. Якщо ж
добуток дорівнює сумі, вивести різницю чисел.*/
    int num1, num2;
    std::cout<<"First number: ";
    std::cin >>num1;
    std::cout<<"Second number: ";
    std::cin >>num2;
    int sum = num1+num2;
    int product = num1*num2;
    int difference = num1-num2;
    if(sum==product){
        std::cout<<difference<<'\n';
    }else if(product>sum){
        std::cout<<product<<'\n';
    }else{
        std::cout<<sum<<'\n';
    }

    /*Задача 9.
В університеті використовується наступна шкала для інтерпретації результатів
тестування студентів: 90 балів і вище – оцінка A, 80-89 балів – оцінка B, 70-79 балів –
оцінка C, 60-69 балів – оцінка D, нижче 60 – оцінка F. Напишіть програму, яка на основі
введеного тестового балу повертає оцінку для цього балу.*/
    int grade;
    char letter;
    std::cout<<"Grade: ";
    std::cin >>grade;
    if(grade>=90)letter = 'A';
    if(grade>=80 && grade<=89)letter = 'B';
    if(grade>=70 && grade<=79)letter = 'C';
    if(grade>=60 && grade<=69)letter = 'D';
    if(grade<60)letter = 'F';

    /*Задача 10*.
Дано три цілих числа. Визначте, скільки серед них збігаються. Програма повинна
вивести одне з чисел: 2 – якщо усі числа однакові, 1 – якщо два числа однакові, або 0 –
якщо усі введені числа різні.*/
    int A,B,C,count;
    std::cout<<"Number A: ";
    std::cin >>A;
    std::cout<<"Number B: ";
    std::cin >>B;
    std::cout<<"Number C: ";
    std::cin >>C;
    if(A==B)count++;
    if(A==C)count++;
    if(B==C)count++;
    std::cout<<count<<'\n';


    return 0;
}