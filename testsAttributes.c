#include <ncurses.h>

int main(){
	//attrset();
	//attron();
	//attroff();
	//standend();
	//chgat();
	//mvchgat();
	//init_pair();
	initscr();
	addch('A' | A_STANDOUT);
	addch('\n');
	addch('A' | A_BLINK);
	addch('\n');
	addch('A' | A_DIM);
	addch('\n');
	addch('A' | A_BOLD);
	addch('\n');
	addch('A' | A_PROTECT);
	addch('\n');
	addch('A' | A_INVIS);
	addch('\n');
	addch('A' | A_ALTCHARSET);
	addch('\n');
	addch('A' | A_CHARTEXT);
	addch('\n');
	addch('A' | COLOR_PAIR(117));
	refresh();
	getch();
	endwin();
}
