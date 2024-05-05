#include <iostream>
#include <cmath>

int main(){

    /*Задача 5.
      Задано координати двох точок на площині. Знайти координати середини відрізка, що
      їх сполучає.
    */
    int x1, y1, x2, y2, x, y;
    std::cout << "x1 = ";
    std::cin  >> x1;
    std::cout << "y1 = ";
    std::cin  >> y1;

    std::cout << "x2 = ";
    std::cin  >> x2;
    std::cout << "y2 = ";
    std::cin  >> y2;

    x = (x1+x2)/2;
    y = (y1+y2)/2;

    std::cout << "x= "<< x << "y= "<< y<< std::endl;

    /*Задача 6.
      Задано довжини двох сторін трикутника та кут між ними (кут задано в радіанах). Знайти
      площу трикутника.
    */
    int a, b;
    double angle, area;
    std::cout << "Side a: ";
    std::cin  >> a;
    std::cout << "Side b: ";
    std::cin  >> b;
    std::cout << "Angle in radians: ";
    std::cin  >> angle;
    area = ((a*b)/2)*sin(angle);
    std::cout << "Area is " << area << std::endl;

    /*Задача 7.
      Написати програму, яка нарахує заробітну плату перекладача, який переклав з однієї
      мови на іншу певну кількість сторінок, якщо відома вартість письмового перекладу
      однієї сторінки тексту та кількість перекладених сторінок.
    */
    
    int pages;
    float cost, salary;
    std::cout << "Pages translated: ";
    std::cin  >> pages;
    std::cout << "Cost: ";
    std::cin  >> cost;
    salary = pages*cost;
    std::cout << "Salary is "<< salary<< std::endl;
    
    /*Задача 8.
      Порахувати вартість річної підписки журналів та газет, знаючи вартість одного номера
      та періодичність видання (вважати, що у році 365 днів, періодичність також задається в
      днях).
    */
    int itemCost=0, frequency=0;
    int totalCost = 0;
    std::cout << "Item cost: ";
    std::cin  >> itemCost;
    std::cout << "Frequency: ";
    std::cin  >> frequency;
    totalCost = (365/frequency)*itemCost;
    std::cout << "Total cost is " << totalCost << std::endl;

    /*Задача 10*.
      Переставити місцями значення двох змінних не використовуючи допоміжної змінної.
    */
  int miu = 7, mao = 127;
  miu = miu^mao;
  mao = miu^mao;
  miu = miu^mao;
  std::cout << "miu = "<<miu<<" mao = "<<mao<<std::endl;





    return 0;
}