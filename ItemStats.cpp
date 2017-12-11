#include <iostream>
#include "ItemStats.h"

using namespace std;

ItemStats::ItemStats()
{

}

ItemStats::ItemStats( double ItemAttackParam, double ItemDefenceParam)
{
	
	ItemAttack = ItemAttackParam;
	ItemDefence = ItemDefenceParam;
}


void ItemStats::setItemAttack(double ItemAttackParam)
{
	ItemAttack = ItemAttackParam;
}

double ItemStats::getItemAttack() const
{
	return ItemAttack;
}

void ItemStats::setItemDefence(double ItemDefenceParam)
{
	ItemDefence = ItemDefenceParam;
}

double ItemStats::getItemDefence() const
{
	return ItemDefence;
}