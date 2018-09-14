#pragma once
class Zergling
{
public:
	Zergling();
	~Zergling();
	int attack();
	int health = 35;
	void takeDamage(int damage);
	bool isAlive();
};

