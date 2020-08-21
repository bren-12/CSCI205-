#include <iostream>
#include <string>


char GetUserInput()
{
    char op{};
    do
    {
        std::cout << "Enter Operator: \n";
        std::cin >> op;
    }
    while(op!='+' && op!='-' && op!='*' && op!='/');

    return op;
}

int main()
{
    char op{GetUserInput()};
    std::cout << "Your operator is: ";
    std::cout << op;
    return 0;
}