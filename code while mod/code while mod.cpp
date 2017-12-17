// code while mod.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int x = 7;
	while (x % 3) {
		x += (x - 2);
		x /= 2;
	}
	std::cout << x;

    return 0;
}

