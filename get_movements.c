#include <stdio.h>
#include "libs.h"

extern char campo[200][200];

int get_movements()
{
	int c;
	struct pos position;
	static int posizionex = 40;
	static int posizioney = 60;
	static int punti = 0;

	
	position.points = punti;
	position.x = posizionex;
	position.y = posizioney;
	position.object = '@';

	turn_off_terminalbuffer(&c);
	switch(c)
	{
		case 'a':
			//gotoxy(position.x, position.y);
	  		//gotoxy(position.x, position.y);
			if(campo[position.x][--position.y]== '#')
			{
				return EOF;
			}
				else if(campo[position.x][position.y] == '$')
				{
			 		punti+=1;;
					campo[position.x][++position.y] = ' ';
					campo[position.x][--position.y] = position.object;
					stampa_campo(&punti);

				}
					else if(campo[position.x][position.y] == ' ')
					{
						campo[position.x][++position.y] = ' ';
						campo[position.x][--position.y] = position.object;
						stampa_campo(&punti);
					}
						else
					       		printf("problems");	
			break;
		case 'd':
			//gotoxy(position.x, position.y);
			if(campo[position.x][++position.y] == '#')
			{
			       	return EOF;
			}
				else if(campo[position.x][position.y] == '$')
				{
					punti+=1;;
					campo[position.x][--position.y] = ' ';
					campo[position.x][++position.y] = position.object;
					stampa_campo(&punti);
				}
					else if(campo[position.x][position.y] == ' ')
					{
						campo[position.x][--position.y] = ' ';
						campo[position.x][++position.y] = position.object;
						stampa_campo(&punti);
					}
						else 
							printf("problemi");
			break;
		case 'w':
			if(campo[--position.x][position.y] == '#')
			{
				return EOF;
			}
				else if(campo[position.x][position.y] == '$')
				{
					punti+=1;
					campo[++position.x][position.y] = ' ';
					campo[--position.x][position.y] = position.object;
					stampa_campo(&punti);
				}
					else if(campo[position.x][position.y] == ' ')
					{
						campo[++position.x][position.y] = ' ';
						campo[--position.x][position.y] = position.object;
						stampa_campo(&punti);
					}
						else
							printf("problems");
			break;
		case 's':
			if(campo[++position.x][position.y] == '#')
			{
				return EOF;
			}
				else if(campo[position.x][position.y] == '$')
				{
					punti+=1;
					campo[--position.x][position.y] = ' ';
					campo[++position.x][position.y] = position.object;
					stampa_campo(&punti);
				}
					else if(campo[position.x][position.y] == ' ')
					{
						campo[--position.x][position.y] = ' ';
						campo[++position.x][position.y] = position.object;
						stampa_campo(&punti);
					}
					else
					       printf("problems");	
			break;
		default:
			//printf("no awsd -> %c", campo[position.x][position.y]);
			;
	}
	posizionex = position.x;
	posizioney = position.y;
return punti;
}
