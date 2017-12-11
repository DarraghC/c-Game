#ifndef ENGINE_H
#define ENGINE_H
#include "Point.h"


class Engine
{
private:



public:
	Engine();

	void loadMenu();
	void loadLevelOne();
	
	void setEnginePos(int C, int R);
	void setEngineObject(Point z);

	

	void run();

	enum Loader
	{
		MENU,
		LEVELONE,
		QUIT
	};

};

#endif 