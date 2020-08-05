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
    */
   int number {2};
   std::cout << "Enter a number and it will be printed below" << '\n' << '\n'; 
   std::cin >> number;
   std::cout << number;

   return 0;
}