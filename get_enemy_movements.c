#include "libs.h"
#include <time.h>


extern char campo[30][102];

void get_enemy_movements(struct pos *position)
{
	if(position-> enem.x < position->x && campo[++position->enem.x][position->enem.y] != '#')//X IS UPDATED!!
	{
		campo[--position->enem.x][position->enem.y] = ' ';
		campo[++position->enem.x][position->enem.y] = position->enem.enemy_obj;
	}
	else
		;
}
