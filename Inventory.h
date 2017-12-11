#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H
#include "Items.h"

class Inventory: public Items
{
public:
	Inventory();
	Inventory(Items* start);
	void RemoveFromList(Items* remove);
	void addToList(Items* pos, Items* add);
	void insert(Items* position, Items* insert);
	void printItemsList(Items* listStart);
};

#endif