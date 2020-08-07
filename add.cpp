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

int readNumber()
{
    int num1{0};
    std::cout << "Enter number: ";
    std::cin >> num1;
    return num1;
}

void writeAnswer(int num)
{
    int numFinal = num;
    std::cout << "Your Answer = " << numFinal;
}