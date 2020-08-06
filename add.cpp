#include <iostream>

void addSubstractPrint()
{
    int number1 {1};
    int number2 {2};
    std::cout << "Enter a number 1" << '\n'; 
    std::cout << "Enter a number 2" << '\n'; 
    std::cin >> number1;
    std::cin >> number2;
    std::cout << "Number 1 + Number 2 = " << (number1 + number2) << '\n';
    std::cout << "Number 1 - Number 2 = " << (number1 - number2);
}