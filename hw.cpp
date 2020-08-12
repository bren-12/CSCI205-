#include "add.h"
//#include "monster.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Define our different monster types as an enum
enum class MonsterType
{
	ogre,
	dragon,
	orc,
	giant_spider,
	slime
};
 
// Our monster struct represents a single monster
struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};
 
// Return the name of the monster's type as a string
// Since this could be used elsewhere, it's better to make this its own function
std::string getMonsterTypeString(MonsterType type)
{
	if (type == MonsterType::ogre)
		return "Ogre";
	else if (type == MonsterType::dragon)
		return "Dragon";
	else if (type == MonsterType::orc)
		return "Orc";
	else if (type == MonsterType::giant_spider)
		return "Giant Spider";
	else if (type == MonsterType::slime)
		return "Slime";
 
	return "Unknown";
}
 
// Print our monster's stats
void printMonster(Monster monster)
{
	std::cout << "This " << getMonsterTypeString(monster.type) <<
		" is named " << monster.name <<
		" and has " << monster.health << " health.\n";
}
 

int main()
{
    Monster ogre{ MonsterType::ogre, "Torg", 145 };
	Monster slime{ MonsterType::slime, "Blurp", 23 };
 
	printMonster(ogre);
	printMonster(slime);
    return 0;
}