#include "Player.h"
#include "Object.h"
#include "Point.h"
#include <assert.h>
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

Player::Player()
{

}

Player::Player(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double HealthParam, double AttackParam, double DefenceParam)
	:Object(nameParam, positionParam, charNumParam,	AliveParam, HealthParam, AttackParam, DefenceParam)
{

}

