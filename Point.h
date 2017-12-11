#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
private :
	int posX;
	int posY;

public:
	
	Point();
	Point(int x, int y);

	void setPosX(int posXParam);
	int getPosX() const;

	void setPosY(int posYParam);
	int getPosY() const;

};

#endif 