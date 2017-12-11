#include "Engine.h"
#include "Movement.h"
#include "Player.h"
#include "Point.h"
#include "Items.h"
#include "Object.h"
#include "Inventory.h"
#include "Enemy.h"
#include <Windows.h>
#include <string.h>
#include <iostream>
#include <assert.h>

Movement ::Movement() //constructor
{

}

void Movement::setMovementPoint(Point z)
{
	int C, R;
	C = z.getPosX();
	R = z.getPosY();

	COORD xy;
	xy.X = C;
	xy.Y = R;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

void Movement::setMovementInts(int C, int R)  //set a position
{
	COORD xy;
	xy.X = C;
	xy.Y = R;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

void Movement::playerMove(Player &p)
{
	p.setAlive(true);

	Point playerPos = p.getObjectPoint();

	int playerPositionX = playerPos.getPosX();
	int playerPositionY = playerPos.getPosY();

	while (p.getAlive() == true)
	{
		Point newplayerPos = playerPos;

		int newPlayerPositionX = newplayerPos.getPosX();
		int newPlayerPositionY = newplayerPos.getPosY();

		newPlayerPositionX = playerPositionX;
		newPlayerPositionY = playerPositionY;

		if (GetKeyState(VK_UP) & 0x8000)
		{
			newPlayerPositionY = playerPositionY - 1;
		}

		if (GetKeyState(VK_DOWN) & 0x8000)
		{
			newPlayerPositionY = playerPositionY + 1;
		}

		if (GetKeyState(VK_RIGHT) & 0x8000)
		{
			newPlayerPositionX = playerPositionX + 1;
		}

		if (GetKeyState(VK_LEFT) & 0x8000)
		{
			newPlayerPositionX = playerPositionX - 1;
		}

		
		// Blank old player position
		setMovementInts(playerPositionX, playerPositionY);//w
		std::cout << " ";

		// Draw new player position
		setMovementInts(newPlayerPositionX, newPlayerPositionY); //w
		std::cout << p.getChar();

		playerPositionX = newPlayerPositionX;
		playerPositionY = newPlayerPositionY;

		playerPos.setPosX(playerPositionX);
		playerPos.setPosY(playerPositionY);
		p.setObjectPoint(playerPos);

		Sleep(60);
	}
}
//Item is got and the char choosen is printed on the spot
void Movement::ItemPos(Items i)
{
	Point ItemPos = i.getItemPoint();

	int ItemX = ItemPos.getPosX();
	int ItemY = ItemPos.getPosY();

	setMovementInts(ItemX, ItemY); 
	std::cout << i.getChar();
}

void Movement::EnemyPos(Enemy e)
{
	Point EnemyPos = e.getObjectPoint();

	int EnemyX = EnemyPos.getPosX();
	int EnemyY = EnemyPos.getPosY();

	setMovementInts(EnemyX, EnemyY);
	std::cout << e.getChar();
}

void Movement::NpcPos(Npc n)
{
	Point NpcPos = n.getObjectPoint();

	int NpcX = NpcPos.getPosX();
	int NpcY = NpcPos.getPosY();



	setMovementInts(NpcX, NpcY);
	std::cout << n.getChar();
}

