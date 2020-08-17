#include "add.h"
//#include "monster.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int x[]{5, 8, 9, 10};

	int *iPtr{x};

	std::cout << *(x+1) << '\n';
	std::cout << *x << '\n';
	std::cout << *(x+2) << '\n';

	std::cout << iPtr << '\n';

    return 0;
}