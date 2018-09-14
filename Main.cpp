// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2018

#include <iostream>
#include "Marine.h"
#include "Zergling.h"
using namespace std;
int marineSize = 10;
int zergSize = 20;
Marine squad[10];
Zergling swarm[20];
bool marineAlive(Marine * squadarr, size_t numofmarines)
{
	if (marineSize >= 0) {
		return true;
}
}

// Is there a zergling Alive
bool zerglingAlive(Zergling * swarmArr, size_t numofZerg)
{
	if (zergSize >= 0) {
		return true;
	}
}
int main() {
	int marineSize = 10;
	int zergSize = 20;
	int currZerg = 0;
	int currMarines = 0;
	Marine squad[10];
	Zergling swarm[20];

	cout << "A squad of marines approaches a swarm of Zerglings and opens fire! The Zerglings charge!" << endl;
	// Attack each other until only one team is left alive
	while (marineAlive(squad, marineSize) && zerglingAlive(swarm, zergSize)) // If anyone is left alive to fight . . .
	{
		if (marineAlive(squad, marineSize)) // if there's at least one marine alive
		{
			for (size_t i = 0; i < marineSize; i++) // go through the squad
			{
				// each marine will attack the first zergling in the swarm
				if (zergSize > 0) {
					cout << "A marine fires for " << squad[i].attack() << " damage. " << endl;
					int damage = squad[i].attack();
					swarm[currZerg].takeDamage(damage);
					if (!swarm[currZerg].isAlive()) // if the zergling dies, it is marked as such
					{
						cout << "The zergling target dies" << endl;
						--zergSize;
						++currZerg;
					}
					else {
						cout << "There are " << zergSize << " Zerglings left" << endl;
					}
				}
			}
		}
		if (zerglingAlive(swarm, zergSize)) // if there's at least one zergling alive
		{
			for (size_t i = 0; i < zergSize; i++) // loop through zerglings
			{
				if (marineSize > 0) {
					cout << "A zergling attacks for " << swarm[i].attack() << " damage." << endl;
					int damage = swarm[i].attack();
					squad[currMarines].takeDamage(damage);
					if (!squad[currMarines].isAlive())
					{
						cout << "The marine succumbs to his wounds." << endl;
						--marineSize;
						++currMarines;
					}
					else {
						cout << "There are " << marineSize << " Marines left." << endl;
					}

				}
			} 
		}
		if (marineSize > 0 && zergSize <= 0)
		{
			cout << "The fight is over. " << endl;
			cout << "The Marines win." << endl;
			system("pause");
			return 0;
		}
		else if (zergSize > 0 && marineSize <= 0) {
			cout << "The fight is over. " << endl;
			cout << "The Zerg Win." << endl;
			system("pause");
			return 0;
		}
		else if (zergSize == 0 && marineSize == 0) {
			cout << "The fight is over. " << endl;
			cout << "Everybody died." << endl;
			system("pause");
			return 0;
		}
	} 
}
