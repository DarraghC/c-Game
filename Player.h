#ifndef PLAYER_H
#define PLAYER_H
#include "Object.h"

class Player : public Object
{

public:
	
	Player();
	Player(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double HealthParam, double AttackParam, double DefenceParam);

};

#endif 