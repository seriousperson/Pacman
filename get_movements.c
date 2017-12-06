#include <stdio.h>
#include "libs.h"

extern char campo[30][102];

int get_movements(struct pos *position)
{
	int c;
	int controller = 1;
	

	turn_off_terminalbuffer(&c); /*receives keyboard input without pressing enter*/
	switch(c)
	{
		case 'a':
			if(campo[position->x][--position->y]== '#') /*check if the next position is a '#' UPDATED!!!*/
			{
				return EOF;
			}
			else if(campo[position->x][position->y] == '$') /*if it is a $*/
			{
			 	position->points+=1;			/*add +1 point*/
				campo[position->x][++position->y] = ' ';/*where player was before is now empty*/
				campo[position->x][--position->y] = position->object; /*put player a bit to the left*/
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
			;//don't make changes if anyother key is pressed
	}
return controller;
}
