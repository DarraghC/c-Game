#include "Engine.h"
#include "Player.h"
#include "Items.h"
#include "Inventory.h"
#include "Enemy.h"
#include "Npc.h"
#include "Point.h"
#include "Movement.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <assert.h>

Engine::Engine() //constructor
{
	
}

void Engine::run()
{
	Loader levelToLoad = MENU;

	Point p(10, 10);
	Player pl("Player", p,1, true, 100, 10.0, 10.0);

	Movement myMover;

	while (levelToLoad != QUIT)
	{

		if (levelToLoad == MENU)
		{
			system("cls");
			Sleep(500);
			loadMenu();

			while (levelToLoad == MENU)
			{

				if (GetKeyState(0x20) & 0x8000) {

					levelToLoad = LEVELONE;
				}
			}
		}

		else if (levelToLoad == LEVELONE)
		{
			system("cls");
			Sleep(500);
			loadLevelOne();
			Point g(20, 20);
			Point s(20, 30);
			Point e(10, 20);
			Point n(10, 40);

			Enemy enemy("Enemy", e, 6, true, 100, 5.0, 5.0);
			Npc npc("Npc", n, 5, true, 100, 5.0, 5.0);

			Items Gun("Machine Gun", g, 2, 50, 45);
			Items Shield("Shield", s, 2, 0, 100);

			myMover.EnemyPos(enemy);
			myMover.NpcPos(npc);

			myMover.ItemPos(Gun);
			myMover.ItemPos(Shield);

			while (levelToLoad == LEVELONE)
			{
				myMover.playerMove(pl);
			}
		}
	}
}

void Engine::setEnginePos(int C, int R)  //set a position
{
	COORD xy;
	xy.X = C;
	xy.Y = R;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), xy);
}


void Engine::setEngineObject(Point z)
{
	COORD xy;
	int a = z.getPosX();
	int b = z.getPosY();

	xy.X = a;
	xy.Y = b;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

 




void Engine::loadMenu()  //load level layout for the main menu
{
	int framex = 20;
	int framey = 20;
	setEnginePos(framex, framey);
	std::cout << "Press Space Bar to play";   //print out
	
}

void Engine::loadLevelOne()  //load the layout for level one
{


	int framex = 0;
	int framey = 0;
	setEnginePos(framex, framey);    // draw along top

	for (int i = 0; i < 130; i++) {
		std::cout << "#";
	}



	framex = 0;
	framey = 45;
	setEnginePos(framex, framey);   // draw along bottom

	for (int i = 0; i < 130; i++) {
		std::cout << "#";
	}

	framex = 0;
	framey = 1;
	setEnginePos(framex, framey);


	for (int i = 1; i < 46; i++) {  // draw left
		framey = i;
		setEnginePos(framex, framey);
		std::cout << "#";
	}



	framex = 78;
	framey = 1;
	setEnginePos(framex, framey);    // draw Center


	for (int i = 1; i < 46; i++) {
		framey = i;
		setEnginePos(framex, framey);
		std::cout << "#";
	}

	framex = 129;
	framey = 1;

	setEnginePos(framex, framey);    // draw far right


	for (int i = 1; i < 46; i++) {
		framey = i;
		setEnginePos(framex, framey);
		std::cout << "#";
	}

	framex = 84;
	framey = 5;
	setEnginePos(framex, framey);
	std::cout << "* Use arrow keys to move";   //print out

	framex = 84;
	framey = 7;
	setEnginePos(framex, framey);
	std::cout << "2 are items";  //print out

	framex = 84;
	framey = 9;
	setEnginePos(framex, framey);
	std::cout << "1 Is the Player";  //print out

	framex = 84;
	framey = 11;
	setEnginePos(framex, framey);
	Inventory.printItemsList(Items* listStart);  //print out
}
	void ItemPickUp(Items ip, Player p)
	{
		Point ItemPickUpPos = ip.getItemPoint();
		Point PlayerPos = p.getObjectPoint();

		int ItemX = ItemPickUpPos.getPosX();
		int ItemY = ItemPickUpPos.getPosY();

		int PlayerX = PlayerPos.getPosX();
		int PlayerY = PlayerPos.getPosY();

		if (PlayerX == ItemX && PlayerY == ItemY)
		{
			Inventory.addToList(Items* pos, Items* add);
		}
	
}



