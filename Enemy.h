#ifndef ENEMY_H
#define ENEMY_H
#include "Object.h"

class Enemy : public Object
{

public:
	Enemy();
	Enemy(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double healthParam, double AttackParam, double DefenceParam);

};

#endif 