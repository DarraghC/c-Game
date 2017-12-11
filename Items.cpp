#include "Items.h"
#include "ItemStats.h"
#include <Windows.h>
#include <iostream>

Items::Items()
{
	ItemName = "";
	sprite = char(0);
}

Items::Items(std::string ItemNameParam, Point positionParam, int charNumParam, double ItemAttackParam, double ItemDefenceParam)
	:ItemStats( ItemAttackParam, ItemDefenceParam)
{
	ItemName = ItemNameParam;
	position = positionParam;
	sprite = char(charNumParam);
}

Items* Next;
Items* Previous;



void Items::setItemName(std::string ItemNameParam)
{
	ItemName = ItemNameParam;
}

std::string Items::getItemName() const
{
	return ItemName;
}

void Items::setChar(int charNumParam)
{
	sprite = char(charNumParam);
}


int Items::getChar() const
{
	return sprite;
}

void Items::setItemPoint(Point Param)
{
	position = Param;
}

Point Items::getItemPoint() const
{
	return position;
}

void Items::setNext(Items* nextParam)
{
	Next = nextParam;
}

Items* Items::getNext()
{
	return Next;
}

void Items::setPrevious(Items* preParam)
{
	Previous = preParam;
}

Items* Items::getPrevious()
{
	return Previous;
}
