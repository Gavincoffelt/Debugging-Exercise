#include "Marine.h"



Marine::Marine()
{
	health = 50;
}


Marine::~Marine()
{
	health = 50;
}

int Marine::attack()
{
	return 7;
}

void Marine::takeDamage(int damage)
{
	health -= damage;
	if (health < 0) {
		health = 0;
	}
}
bool Marine::isAlive()
{
	if (health > 0) {
		return true;
	}
	else {
		return false;
	}
}
