#include <stdio.h>
#include "libs.h"

extern char campo[200][200];

int get_movements(struct pos *position)
{
	int c;
	int controller = 1;

	

	turn_off_terminalbuffer(&c); /*this helps to insert an input without pressing enter*/
	switch(c)
	{
		case 'a':
			if(campo[position->x][--position->y]== '#') /*check if the next position is a '#'*/
			{
				return EOF;
			}
			else if(campo[position->x][position->y] == '$') /*if it is a $*/
			{
			 	position->points+=1;			/*add +1 point*/
				campo[position->x][++position->y] = ' ';/*make the previous position to be an empty "zone"*/
				campo[position->x][--position->y] = position->object; /*return to the next position and put @*/
				stampa_campo(position);					/*update changes*/
			}
			else if(campo[position->x][position->y] == ' ')
			{
				campo[position->x][++position->y] = ' ';
				campo[position->x][--position->y] = position->object;
				stampa_campo(position);
			}
			else
				printf("debug purpuse: '%c'", c); /*if there is something wrong this line will be printed*/	
			break;
		case 'd':
			if(campo[position->x][++position->y] == '#')
			{
			       	return EOF;
			}
			else if(campo[position->x][position->y] == '$')
			{
				position->points+=1;
				campo[position->x][--position->y] = ' ';
				campo[position->x][++position->y] = position->object;
				stampa_campo(position);
			}
			else if(campo[position->x][position->y] == ' ')
			{
				campo[position->x][--position->y] = ' ';
				campo[position->x][++position->y] = position->object;
				stampa_campo(position);
			}
			else 
				printf("debug purpose");	/*this line be printed if there is something wrong*/
			break;
		case 'w':
			if(campo[--position->x][position->y] == '#')
			{
				return EOF;
			}
			else if(campo[position->x][position->y] == '$')
			{
				position->points+=1;
				campo[++position->x][position->y] = ' ';
				campo[--position->x][position->y] = position->object;
				stampa_campo(position);
			}
			else if(campo[position->x][position->y] == ' ')
			{
				campo[++position->x][position->y] = ' ';
				campo[--position->x][position->y] = position->object;
				stampa_campo(position);
			}
			else
				printf("debug purpose");	/*this line will be printed if there is something wrong*/
			break;
		case 's':
			if(campo[++position->x][position->y] == '#')
			{
				return EOF;
			}
			else if(campo[position->x][position->y] == '$')
			{
				position->points+=1;
				campo[--position->x][position->y] = ' ';
				campo[++position->x][position->y] = position->object;
				stampa_campo(position);
			}
			else if(campo[position->x][position->y] == ' ')
			{
				campo[--position->x][position->y] = ' ';
				campo[++position->x][position->y] = position->object;
				stampa_campo(position);
			}
			else
				printf("problems");		/*this line will be printd if there is something wrong*/	
			break;
		default:
			;
	}
return controller;
}
