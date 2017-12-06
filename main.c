#include <stdio.h>
#include <stdlib.h>
#include "libs.h"


int main()
{
	int controller = 1;

	struct pos *position;

	presentation();
	inizializzazione(position); /*initializes the variable in the structures enemy and player*/
	stampa_campo(position);	/*print game*/

	while(controller == 1 && controller != EOF)
	{
		controller = get_movements(position);
		get_enemy_movements(position);
	}
	printf("YOU HAVE LOST!");

return 0;
}









