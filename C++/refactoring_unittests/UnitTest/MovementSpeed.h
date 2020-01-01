#pragma once
#include <exception>

class InvalidInputException : public std::exception
{
public:
	InvalidInputException();
};

float calcMovementSpeedFactor(int groundStickyness);