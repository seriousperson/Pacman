
struct pos
{
	int x;
	int y;
	char object;
	int points;

};



int get_movements(void);
void turn_off_terminalbuffer(int *);
void stampa_campo(int *);
void inizializzazione(void);
void presentation(void);

extern int punti;
