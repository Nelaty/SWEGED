#include "Player.h"

#include <algorithm>

Player::Player(PlayerType type)
	: m_type(type)
{
	if(type == PlayerType::mage)
	{
		m_damage = 10.0f;
		m_health = 50.0f;
	}
	else if(type == PlayerType::warrior)
	{
		m_damage = 5.0f;
		m_health = 100.0f;
	}
}

Player::~Player()
{
}

float Player::getDamage() const
{
	return m_damage;
}

void Player::changeHealth(float delta)
{
	m_health += delta;
	if(m_type == PlayerType::mage)
	{
		if(m_health >= 50.0f)
		{
			m_health = 50.0f;
		}
	}
	else if(m_type == PlayerType::warrior)
	{
		if(m_health >= 100.0f)
		{
			m_health = 100.0f;
		}
	}

	if(m_health <= 0.0f)
	{
		m_health = 0.0f;
	}
}

float Player::getHealth() const
{
	return m_health;
}

bool Player::isDead() const
{
	return m_health <= 0.0f;
}

int Player::getItemCount(const std::string& name) const
{
	int count = 0;
	for (const auto& item : m_items)
	{
		if (item.getName() == name)
		{
			++count;
		}
	}
	return count;
}

void Player::addItem(const Item& item)
{
	m_items.emplace_back(item);
}

void Player::useItem(const std::string& name)
{
	auto foundItem = std::find_if(m_items.begin(),
								  m_items.end(),
								  [&](const Item& item)
	{
		return item.getName() == name;
	});

	// Didn't find an item with the given name
	if(foundItem == m_items.end())
	{
		return;
	}

	// Use the found item
	foundItem->use();

	// Items disappear when they are used
	m_items.erase(foundItem);
}
