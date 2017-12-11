#ifndef ITEMS_H
#define ITEMS_H
#include "Point.h"
#include "ItemStats.h"
#include <string>
using namespace std;


class Items :public ItemStats
{
private:
	string ItemName;
	Point position;
	char sprite;

public:
	Items();
	Items(std::string ItemNameParam, Point positionParam, int charNumParam, double ItemAttackParam, double ItemDefenceParam);

	void setItemName(std::string ItemNameParam);
	std::string getItemName() const;

	void setChar(int charNumParam);
	int getChar() const;

	void setItemPoint(Point Param);
	Point getItemPoint()const;

	void setNext(Items* nextParam);
	Items* getNext();

	void setPrevious(Items* preParam);
	Items* getPrevious();
	


};


#endif