struct pos
{
	int x;
	int y;
	char object;
	int points;
};



int get_movements(struct pos *position);
void turn_off_terminalbuffer(int *);
void stampa_campo(struct pos *position);
struct pos *inizializzazione(struct pos *position);
void presentation(void);

