#include "libs.h"
#include <stdio.h>

extern char campo[200][200];

struct pos *inizializzazione(struct pos *position)
{	
	position->object = '@';
	position->points = 0;
	position->x = 40; 
	position->y = 60;
	campo[position->x][position->y] = position->object; //points initialized correctly

return position;
}

