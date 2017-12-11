#include "Object.h"
#include "Npc.h"
#include "Point.h"
#include <assert.h>
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

Npc::Npc()
{

}


Npc::Npc(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double healthParam, double AttackParam, double DefenceParam)
	:Object(nameParam, positionParam, charNumParam, AliveParam, healthParam, AttackParam, DefenceParam)
{

}