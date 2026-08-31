#include "libs.h"

int main(){
	SCREEN *scr = newterm(NULL, stdout, stdin);
	printw("nah");
	refresh();
	getch();
	endwin();
}
