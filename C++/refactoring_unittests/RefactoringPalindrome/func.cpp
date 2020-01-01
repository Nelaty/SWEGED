#include "func.h"

bool func(unsigned a, unsigned b)
{
	if(a == b) return false;
	unsigned n1[10];
	unsigned n2[10];
	do
	{
		n1[a % 10]++;
		a /= 10;
	} while(a > 0);
	do
	{
		n2[b % 10]++;
		b /= 10;
	} while(b > 0);
	for(int i = 0; i < 10; ++i)
	{
		if(n1[i] - n2[i] != 0) return false;
	}
	return true;
}