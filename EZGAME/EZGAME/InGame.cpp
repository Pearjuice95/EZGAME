#include "InGame.h"
extern Player p1;
extern Player p2;
extern int g_GameStatus;

void PreRound()
{
	p1.status = 3;
	p2.status = 3;

	p1.playerpoint.x = 150;
	p1.playerpoint.y = 700;

	p2.playerpoint.x = 874 - (p2.IDLE->BmpX * 2);
	p2.playerpoint.y = 700;

}

