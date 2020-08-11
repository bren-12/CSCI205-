#include <iostream>

void operateOnNumbers()
{
    double number1 {1};
    double number2 {2};
    char operator1 {'a'};
    std::cout << "Enter a number 1" << '\n'; 
    std::cout << "Enter a number 2" << '\n'; 
    std::cout << "Enter a operator" << '\n'; 
    std::cin >> number1;
    std::cin >> number2;
    std::cin >> operator1;
    
    //while(operator1 != '+' && operator1 != '-' && operator1 != '*' && operator1 != '/')
    //{
    //}
    if(operator1 != '+' || operator1 != '-' || operator1 != '*' || operator1 != '/')
    {
        std::cout << "Please enter a valid operator" << '\n'; 
        std::cin >> operator1;
    }
    
    if(operator1 == '+')
    {
        std::cout << "Number 1 + Number 2 = " << (number1 + number2) << '\n';  
    }

    else if(operator1 == '*')
    {
        std::cout << "Number 1 * Number 2 = " << (number1 * number2) << '\n';  
    }

    else if(operator1 == '/')
    {
        std::cout << "Number 1 / Number 2 = " << (number1 / number2) << '\n';  
    }

    else if(operator1 == '-')
    {
        std::cout << "Number 1 - Number 2 = " << (number1 - number2) << '\n';  
    }

    //std::cout << "Number 1 * Number 2 = " << (number1 + number2) << '\n';
    //std::cout << "Number 1 - Number 2 = " << (number1 - number2);
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
    std::cerr << "writeAnswerRun\n";
    std::cout << "Your Answer = " << numFinal;
}