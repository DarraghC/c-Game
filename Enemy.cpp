#include "Object.h"
#include "Enemy.h"
#include "Point.h"
#include <assert.h>
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

Enemy::Enemy()
{

}

Enemy::Enemy(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double healthParam, double AttackParam, double DefenceParam)
	:Object(nameParam, positionParam, charNumParam, AliveParam, healthParam, AttackParam, DefenceParam)
{

}
