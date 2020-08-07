#include "add.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    /*
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    
    int number1 {1};
    int number2 {2};
    std::cout << "Enter a number 1" << '\n'; 
    std::cout << "Enter a number 2" << '\n'; 
    std::cin >> number1;
    std::cin >> number2;
    std::cout << "Number 1 + Number 2 = " << (number1 + number2) << '\n';
    std::cout << "Number 1 - Number 2 = " << (number1 - number2);
    */
    //addSubstractPrint();
    //std::cout << "\n2.11 Redo";
    int num1 = readNumber();
    int num2 = readNumber();
    int numFinal = num1 + num2;

    writeAnswer(numFinal);

    return 0;
}