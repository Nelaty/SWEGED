#include "func.h"
#include <cstdio>

void testFunc(int a, int b, bool expected)
{
	bool result = func(a, b);
	printf("a=%d, b=%d | result=%d, expected=%d\n", 
		   a, b, result, expected);
}

int main()
{
	testFunc(121, 112, true);
	testFunc(123456789, 918264735, true);
	testFunc(1, 1, false);
	testFunc(1298, 2912, false);
	testFunc(9812749812, 51783781, false);
	getchar();
}