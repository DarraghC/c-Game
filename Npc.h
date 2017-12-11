#ifndef NPC_H
#define NPC_H
#include "Object.h"

class Npc : public Object
{
public:
	Npc();
	Npc(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double healthParam, double AttackParam, double DefenceParam);
};

#endif 
