#include <iostream>
#include <string>

int main(){

    //input-output

    std::cout << "Dummy string" << std::endl;

    int integer = 873;
    //int integer {673}
    std::cout << integer << std::endl;
    std::cerr << "Error message" << std::endl;
    std::clog << "Log message" << std::endl;

    int number;
    std::string word;

    std::cout << "Enter your number" << std::endl;
    std::cin >> number;
    std::cout << "Enter your word" << std::endl;
    std::cin >> word;
    std::cout << "Your number: " << number;
    std::cout << " Your word: " << word << std::endl;

    // std::string two_words;
    // int number2;
    // std::cout << "Enter two words and a number" << std::endl;
    // std::getline(std::cin, two_words);
    // std::cin >> number2;
    // std::cout << "Your two words: " << two_words 
    //           <<"Your number: " << number2;
    return 0;
}