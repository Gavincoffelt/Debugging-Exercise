#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
}


Zergling::~Zergling()
{
	health = 35;
}

int Zergling::attack()
{
	return 5;
}

void Zergling::takeDamage(int damage)
{
	health -= damage;
	if (health < 0) {
		health = 0;
	}
}
bool Zergling::isAlive()
{
	if (health > 0) {
		return true;
	}
	else {
		return false;
	}
}
