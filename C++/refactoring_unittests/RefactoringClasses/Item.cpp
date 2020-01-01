#include "Item.h"

Item::Item()
{
}

Item::~Item()
{
}

const std::string& Item::getName() const
{
	return m_name;
}

void Item::use()
{
	printf("Used %s\n", m_name.c_str());
}
