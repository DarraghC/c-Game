#ifndef MOVEMENT_H
#define MOVEMENT_H
#include "Player.h"
#include "Point.h"
#include "Items.h"
#include "Enemy.h"
#include "Npc.h"

class Movement
{
public:
	Movement();
	void playerMove(Player &p);
	void setMovementPoint(Point z);
	void setMovementInts(int C, int R);

	//setting enemy position
	void ItemPos(Items i);

	void EnemyPos(Enemy e);

	void NpcPos(Npc n);

	//void ItemPickUpPos(Items ip, Player p);
};

#endif