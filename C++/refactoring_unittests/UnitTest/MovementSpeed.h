#pragma once
#include <stdexcept>
#include <string>

class InvalidInputException : public std::exception
{
public:
	explicit InvalidInputException();
	virtual ~InvalidInputException() = default;

	const char* what() const override;

private:
	std::string m_message;
};

float calcMovementSpeedFactor(int groundStickyness);