#pragma once
#include "Item.h"

#include <string>
#include <vector>

enum class PlayerType
{
	warrior,
	mage
};

class Player
{
public:
	explicit Player(PlayerType type);
	~Player();

	/* Damage functions */
	float getDamage() const;
	
	/* Health functions */
	void changeHealth(float delta);
	float getHealth() const;
	bool isDead() const;

	/* Item functions */
	int getItemCount(const std::string& name) const;
	void addItem(const Item& item);
	void useItem(const std::string& name);

	std::vector<Item> m_items;

	float m_health;
	float m_damage;

	const PlayerType m_type;
};