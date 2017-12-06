struct enemy
{
	int x;
	int y;
	char enemy_obj;
};

struct pos
{
	int x;
	int y;
	char object;
	int points;
	struct enemy enem;
};



int get_movements(struct pos *position);
void turn_off_terminalbuffer(int *);
void stampa_campo(struct pos *position);
void inizializzazione(struct pos *positioni);
void get_enemy_movements();
void presentation(void);

