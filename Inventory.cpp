#include <iostream>
#include <string>
#include "Items.h"
#include "Inventory.h"

 
//Removing from a list
void Inventory::RemoveFromList(Items* remove)
{
	Items* Previous = remove->getPrevious();
	Items* Next = remove->getNext();

	if (Previous != NULL)
	{
		Next->setPrevious(Previous);
	}
	if (Next != NULL)
	{
		Previous->setNext(Next);
	}

	remove->setNext(NULL);
	remove->setPrevious(NULL);
}
//adding to list function
void Inventory::addToList(Items* pos, Items* add)
{
	Items* after = pos->getNext();
	Items* posn = after->getPrevious();

	add->setNext(after);
	if (after != NULL)
	add->setPrevious(pos);
	pos->setNext(add);
}

void Inventory::insert(Items* position, Items* insert)
{
	position->setNext(insert);
	insert->setPrevious(position);
}

void Inventory::printItemsList(Items* listStart)
{
	Items* currentItem = listStart;

	while (currentItem != NULL)
	{
		std::cout << "Name: " << currentItem->getItemName() << "Character: " << currentItem->getChar() << "Attack" << currentItem->getItemAttack() << "Defence" << currentItem->getItemDefence() <<  std::endl;
		currentItem = currentItem->getNext();
	}
}