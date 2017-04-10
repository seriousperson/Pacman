#include <stdio.h>
#include <stdlib.h>
#include "libs.h"


int main()
{
	int controller = 0;

	struct pos *position;

	presentation();
	position = inizializzazione(position); /*initializes the variable in the structure*/
	stampa_campo(position);	/*print the game*/

	while((controller = get_movements(position)) != EOF)
		stampa_campo(position);
	printf("YOU HAVE LOST!");

return 0;
}









