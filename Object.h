#ifndef OBJECT_H
#define OBJECT_H
#include "Point.h"
#include "CharStats.h"
#include <string>

class Object :public CharStats
{
private:

	std::string name;
	Point position;
	char sprite;
	

public:
	
	Object();
	Object(std::string nameParam, Point positionParam, int charNumParam, bool AliveParam, double HealthParam, double AttackParam, double DefenceParam);


	void setName(std::string nameParam);
	std::string getName() const;

	void setChar(int charNumParam);
	int getChar() const;

	void setObjectPoint(Point Param);
	Point getObjectPoint()const;

	

};

#endif 