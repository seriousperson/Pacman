#include <stdio.h>
#include "libs.h"
#include <stdlib.h>


char campo[30][102] = {
			  "###########################################################################",
                          "###########################################################################",
			  "##$                                                                     $##",
			  "##                          #  $         #                               ##",
			  "##             ########################  #    #########################  ##",
			  "##      ########            $$$          #     #                    #    ##",
			  "##      #      ########################  #     #   ####  #          #    ##",
			  "##      #         #                      #     #         #          #    ##",
			  "##      #                #################     #    #  $ #          #    ##",
			  "##      #               # $              #     #  ########          #    ##",
			  "##      #               #                #                          #    ##",
			  "##      #               #    #####                                  #    ##",
			  "##      #               #                             #################  ##",
			  "##      #   ######      #    #####       #                    #          ##",
			  "##      #                       #        #                    #       #####",
		 	  "##      #      $$$$$                     #     #########      #          ##",
			  "##      #                              ###   ####      # $$$$ #          ##",
			  "##      #    #########                                 ########          ##",
			  "##      #                              #   $    #                        ##",
			  "##      ########                       #        #                        ##",
			  "##                                                                       ##",
			  "##$                                                                     $##",
			  "###########################################################################",
			  "###########################################################################",
			  
			  
		   };

void stampa_campo(struct pos *position)
{

	system("clear");
	for(int i = 0; i <= 30; i++)
	{
		printf("\n");
		for(int z = 0; z <= 102; z++)
			printf("%c", campo[i][z]);
	}
	printf("\npunti: %d\n", position->points);
}
