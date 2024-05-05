#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    /*Задача 1.
      Задано два цілих числа. Знайти та вивести на екран їх суму, суму їх квадратів та
      квадрат їх суми.
    */

    int x, y;
    std::cout <<"Number x: ";
    std::cin >> x;
    std::cout <<"Number y: ";
    std::cin >> y;
    int sum = x + y;
    int sumOfsqr = (x*x) + (y*y);
    int sumSqr = sum * sum;
    std::cout << "sum = " << sum << " sum squred = " << sumSqr << " sum of x and y squared = " << sumOfsqr <<"\n";
    
    /*Задача 2.
    За даними значеннями довжини сторін трикутника a, b, c (дійсні числа) обчислити
    його периметр.
    */
    int a, b, c;
    float perimeter;
    std::cout << "Side a: ";
    std::cin >> a;
    std::cout << "Side b: ";
    std::cin >> b;
    std::cout << "Side c: ";
    std::cin >> c;
    perimeter = a+b+c;
    std::cout << std::fixed             
             << std::setprecision(1); 
    std::cout << "Perimeter is " << perimeter << std::endl;

    /*Задача 3.
      Задано довжини катетів прямокутного трикутника (дійсні числа). Знайти довжину
      гіпотенузи.
    */
   int leg1, leg2, hypotenuse;
   std::cout << "Leg A of the right triangle: ";
   std::cin  >> leg1;
   std::cout << "Leg B of the right triangle: ";
   std::cin  >> leg2;
   hypotenuse = sqrt((leg1*leg1) + (leg2*leg2));
   std::cout << "Hypothenuse is " << hypotenuse << std::endl;

   /*
   Задача 4.
   Задано радіус кола (дійсне число). Знайти довжину сторони квадрата, вписаного в це
   коло.
   */
   int radius;
   float side;
   std::cout << "Radius: ";
   std::cin  >> radius;
   int diagonal = radius*2;
   side = diagonal / sqrt(2);
   std::cout << "Side is " << side << std::endl;
   



    return 0;
}