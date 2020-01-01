#pragma once
#include <string>

class Item
{
public:
	explicit Item();
	~Item();

	const std::string& getName() const;

	void use();

private:
	std::string m_name;
};