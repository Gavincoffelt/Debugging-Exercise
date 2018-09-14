#pragma once
class Marine
{
public:
	Marine();
	~Marine();
	bool isAlive();
	int attack();
	int health = 50;
	void takeDamage(int damage);

};

