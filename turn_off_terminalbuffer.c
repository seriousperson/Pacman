#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include "libs.h"

/*------------------------------------------------*/
void turn_off_terminalbuffer(int *ci)
{
	struct termios org_opts, new_opts;
	int res=0;

/*-----  store old settings -----------*/
	res=tcgetattr(STDIN_FILENO, &org_opts); /*gets parameters from STDIN_FILENO and put them in structure*/
	assert(res==0);	/*allows dignostic information to be written to stderr*/
	//---- set new terminal parms --------
	memcpy(&new_opts, &org_opts, sizeof(new_opts));/*copy sizenumber of newopts from orgopts to new_opts*/
	new_opts.c_lflag &= ~(ICANON | ECHO | ECHOE | ECHOK | ECHONL | ECHOPRT | ECHOKE | ICRNL);
	tcsetattr(STDIN_FILENO, TCSANOW, &new_opts);
	*ci = getchar();
//------  restore old settings ---------
	res=tcsetattr(STDIN_FILENO, TCSANOW, &org_opts);
	assert(res==0);

}
