#include "MovementSpeed.h"

InvalidInputException::InvalidInputException() 
	: m_message("INVALID")
{
}

const char* InvalidInputException::what() const noexcept
{
	return m_message.c_str();
}

float calcMovementSpeedFactor(int groundStickyness)
{
	if(groundStickyness >= 1 && groundStickyness < 33)
		return 0.1f;
	else if(groundStickyness >= 33 && groundStickyness < 66)
		return 0.5f;
	else if(groundStickyness >= 66 && groundStickyness < 100)
		return 1.0f;
	else if(groundStickyness >= 100 && groundStickyness < 140)
		return 0.8f;
	else if(groundStickyness >= 140 && groundStickyness < 200)
		return 0.2f;
	throw InvalidInputException();
}
