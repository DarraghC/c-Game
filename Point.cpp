#include "Point.h"
#include <iostream>
#include <assert.h>
#include <Windows.h>



Point::Point()
{
	posX = 0;
	posY = 0;
}
Point::Point(int x, int y)
{
	posX = x;
	posY = y;

}

int Point::getPosX() const
{
	return posX;
}

void Point::setPosX(int posXParam)
{
	assert(posXParam >= 0);
	posX = posXParam;
}

int Point::getPosY() const
{
	return posY;
}

void Point::setPosY(int posYParam)
{
	assert(posYParam >= 0);
	posY = posYParam;
}
