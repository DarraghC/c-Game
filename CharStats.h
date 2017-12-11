#ifndef CHARSTATS_H
#define CHARSTATS_H


class CharStats 
{

private:
	double Health = 100.0;
	bool Alive;
	double Attack;
	double Defence;

public:
	CharStats();
	CharStats(double HealthParam, bool AliveParam, double AttackParam, double DefenceParam);

	void setHealth(double HealthParam);
	double getHealth() const;

	void setAlive(bool AliveParam);
	bool getAlive() const;

	void setAttack(double AttackParam);
	double getAttack() const;

	void setDefence(double DefenceParam);
	double getDefence() const;
};

#endif 