#ifndef ITEMSTATS_H
#define ITEMSTATS_H


class ItemStats
{

private:

	double ItemAttack;
	double ItemDefence;

public:
	ItemStats();
	ItemStats(double ItemAttackParam, double ItemDefenceParam);

	void setItemAttack(double ItemAttackParam);
	double getItemAttack() const;

	void setItemDefence(double ItemDefenceParam);
	double getItemDefence() const;
};

#endif 
