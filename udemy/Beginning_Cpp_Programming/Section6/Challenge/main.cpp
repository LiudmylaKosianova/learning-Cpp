
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: ";
    int small_n{0};
    cin  >> small_n;
    cout << "Number of large rooms: ";
    int large_n{0};
    cin >> large_n;
    const double small_price = 25;
    const double large_price = 35;
    const double tax = 0.06;
    cout << "Number of small rooms: " << small_n << endl;
    cout << "Number of large rooms: " << large_n << endl;
    cout << "Price per small room: $" << small_price << endl;
    cout << "Price per large room: $" << large_price << endl;
    cout << "Cost : $" 
         << (small_n * small_price) + (large_n * large_price) 
         << endl;
    cout << "Tax : $" 
         << ((small_n * small_price) + (large_n * large_price)) * tax 
         << endl;
    cout << "=================" << endl;
    cout << "Total estimate: $" 
         << ((small_n * small_price) + (large_n * large_price)) + 
            (((small_n * small_price) + (large_n * large_price)) * tax ) 
         << endl;


 
    cout << endl;
    return 0;
}

