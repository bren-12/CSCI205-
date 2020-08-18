#include <iostream>
#include <cstddef> // std::size_t
#include <algorithm> // std::sort
#include <string>
#include <limits> // std::numeric_limits

using namespace std;

int GetNumberOfNames()
{
	std::cout << "Enter number of names: \n";
	std::size_t number{};
	std::cin >> number;
	return number;
}

void SetNames(std::string *arrayOfNames, int length)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (int i{0}; i < length; i ++)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::getline(std::cin,arrayOfNames[i]);
	}
	//std::cout << "Enter a name: \n";
	//std::cin >> arrayOfNames[0];
	
}

void PrintNames(std::string *arrayOfNames, int length)
{
	
	for (int i{ 0 }; i < length; ++i)
	{
		std::cout << "Name #" << i + 1 << ": " << arrayOfNames[i] << '\n';
	}
	
    //std::cout << "Name #" << i + 1 << ": " << arrayOfNames[i] << '\n';
}

int main()
{
	int numberOfNames{GetNumberOfNames()};
	//auto* arrayOfNames{new std::string[numberOfNames]{}};
	auto* arrayOfNames{ new std::string[static_cast<std::size_t>(numberOfNames)]{} };
	SetNames(arrayOfNames, numberOfNames);

	std::sort(arrayOfNames, arrayOfNames + numberOfNames);

	std::cout << "\nNAMES BELOW \n";
	PrintNames(arrayOfNames, numberOfNames);

	delete[] arrayOfNames;

    return 0;
}
