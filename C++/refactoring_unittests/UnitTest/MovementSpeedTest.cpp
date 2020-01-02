#include "MovementSpeed.h"
#include "catch.hpp"


static const double epsilon = 0.00001;

TEST_CASE("gAequ1")
{
	// Result is a floating point number, which means checking for
	// equality might not work. For this reason we check if it is
	// approximately of what we expect.
	Approx target = Approx(0.1).epsilon(epsilon);
	
	CHECK(calcMovementSpeedFactor(1) == target);	
	// TODO: finish this test case
}

// TODO: Add remaining test cases.


// Hint  for  checking exceptions - use: 
// 
// CHECK_THROWS_AS(<function_call>, <exception_type>);
// 