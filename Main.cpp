#include "Object.h"
#include "CharStats.h"
#include "Player.h"
#include "Inventory.h"
#include "Items.h"
#include "Point.h"
#include "Engine.h"
#include "Npc.h"
#include "Enemy.h"
#include <string.h>
#include <iostream>
#include <Windows.h>

void main()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 800, 800, TRUE);

	Engine myEngine;

	myEngine.run();

	system("pause");
}