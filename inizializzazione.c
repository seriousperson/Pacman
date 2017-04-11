#include "libs.h"
#include <stdio.h>
#include <stdlib.h>

extern char campo[200][200];

struct pos *inizializzazione(struct pos *position)
{	
	printf("initializing object...\n");
	position->object = '@';
	position->points = 0;
	position->x = 40;
	position->y = 59;
	campo[position->x][position->y] = position->object;

	printf("initializing enemy...\n");
	position->enem.enemy_obj = '!';
	position->enem.x = 4;
	position->enem.y = 40;
	campo[position->enem.x][position->enem.y] = position->enem.enemy_obj;
	getchar();


return position;
}

