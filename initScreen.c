#include "libs.h"

void initScreen() {
	initscr();
	raw();
	noecho();
	keypad(stdscr, TRUE);
	getmaxyx(stdscr, maxY, maxX);
}
