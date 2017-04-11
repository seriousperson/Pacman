ex: get_movements.o inizializzazione.o libs.h main.o stampa_campo.o presentation.o turn_off_terminalbuffer.o get_enemy_movements.o 
	gcc -g -o ex get_movements.o inizializzazione.o libs.h main.o stampa_campo.o presentation.o turn_off_terminalbuffer.o get_enemy_movements.o


main.o: main.c
	gcc -g -c main.c 

inizializzazione.o: inizializzazione.c libs.h
	cc -g -c inizializzazione.c

stampa_campo.o: stampa_campo.c
	cc -g -c stampa_campo.c 

get_movements.o: get_movements.c libs.h
	cc -g -c get_movements.c

turn_off_terminalbuffer.o: turn_off_terminalbuffer.c
	cc -g -c turn_off_terminalbuffer.c

presentation.o: presentation.c
	cc -g -c presentation.c

get_enemy_movements.o: get_enemy_movements.c
	cc -g -c get_enemy_movements.c


clean:
	rm *.o
