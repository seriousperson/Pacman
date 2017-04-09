#include "libs.h"
#include <stdio.h>

extern char campo[200][200];

void inizializzazione()
{
	struct pos position;

	position.x = 40;
	position.y = 60;
	position.object = '@';
	position.points = 0;
	campo[position.x][position.y] = position.object;
}

