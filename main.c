#include <stdio.h>
#include <stdlib.h>
#include "libs.h"



int main()
{
	presentation();

	int controller = 0;
	presentation();
	stampa_campo(&controller);

	while((controller = get_movements()) != EOF)
		stampa_campo(&controller);
	printf("YOU HAVE LOST!");

return 0;
}









