ex: get_movements.o inizializzazione.o libs.h main.o stampa_campo.o presentation.o turn_off_terminalbuffer.o 
	gcc -g -o ex get_movements.o inizializzazione.o libs.h main.o stampa_campo.o presentation.o turn_off_terminalbuffer.o


main.o: main.c
	cc -c main.c 

inizializzazione.o: inizializzazione.c libs.h
	cc -c inizializzazione.c

stampa_campo.o: stampa_campo.c
	cc -c stampa_campo.c 

get_movements.o: get_movements.c libs.h
	cc -c get_movements.c

turn_off_terminalbuffer.o: turn_off_terminalbuffer.c
	cc -c turn_off_terminalbuffer.c

presentation.o: presentation.c
	cc -c presentation.c


clean:
	rm *.o
