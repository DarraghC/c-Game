#include "Object.h"
#include "CharStats.h"
#include <Windows.h>
#include "Inventory.h"

Object::Object()
{
	name = "";
	sprite = char(0);
}

Object::Object(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double HealthParam, double AttackParam, double DefenceParam)
	:CharStats( HealthParam, AliveParam, AttackParam, DefenceParam)
{
	name = nameParam;
	position = positionParam;
	sprite = char(charNumParam);
}

void Object::setName(std::string nameParam)
{
	name = nameParam;
}

std::string Object::getName() const
{
	return name;
}

void Object::setChar(int charNumParam)
{
	sprite = char(charNumParam);
}


int Object::getChar() const
{
	return sprite;
}

void Object::setObjectPoint(Point Param)
{
	position = Param;
}

Point Object::getObjectPoint() const
{
	return position;
}

