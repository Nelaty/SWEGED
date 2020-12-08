#include "catch.hpp"
#include "ExpensiveCalculation.h"

#include <chrono>

// Get the run time of expensive calculation in microseconds
int testRunTime(int n)
{
	auto start = std::chrono::high_resolution_clock::now();
	expensiveCalculation(n);
	auto end = std::chrono::high_resolution_clock::now();
	return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}

TEST_CASE("Expensive calculation test")
{
	
	
}