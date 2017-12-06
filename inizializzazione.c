#include "libs.h"
#include <stdio.h>
#include <stdlib.h>

extern char campo[30][102];

void inizializzazione(struct pos *position)
{	
	printf("...");
	position->object = '@';//sey player
	position->points = 0;//set score
	position->x = 4;//set position x
	position->y = 4;//set position y
	campo[position->x][position->y] = position->object;//put player in position

	/*Enemy*/
	position->enem.enemy_obj = '!';//set enemy
	position->enem.x = 20;//set position x
	position->enem.y = 6;//set position y
	campo[position->enem.x][position->enem.y] = position->enem.enemy_obj;//put enemy in position
	

}
