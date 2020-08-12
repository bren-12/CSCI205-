#ifndef ADD_H   //Header Guards to preveny method duplication
#define ADD_H

enum class MonsterType;
struct Monster;
std::string getMonsterTypeString(MonsterType type);
void printMonster(Monster monster);

#endif