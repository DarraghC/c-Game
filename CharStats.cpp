#include <iostream>
#include "CharStats.h"

using namespace std;

CharStats::CharStats()
{

}

CharStats::CharStats(double HealthParam, bool AliveParam, double AttackParam, double DefenceParam)
{
	Health = HealthParam;
	Alive = AliveParam;
	Attack = AttackParam;
	Defence = DefenceParam;
}



void CharStats :: setHealth(double HealthParam)
{
	Health = HealthParam;
}

double CharStats :: getHealth() const
{
	return Health;
}


void CharStats :: setAlive(bool AliveParam)
{
	Alive = AliveParam;
}

bool CharStats :: getAlive() const
{
	return Alive;
}

void CharStats::setAttack(double AttackParam)
{
	Attack = AttackParam;
}

double CharStats::getAttack() const
{
	return Attack;
}

void CharStats::setDefence(double DefenceParam)
{
	Defence = DefenceParam;
}

double CharStats::getDefence() const
{
	return Defence;
}