#include "ExpensiveCalculation.h"

bool check(int n)
{
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

int expensiveCalculation(int n)
{
	int result = 1;
	for(int i = 0; i < n; ++i)
	{
		++result;
		while(!check(result))
		{
			++result;
		}
	}
	return result;
}
