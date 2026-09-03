#include "libs.h"

void initScreen() {
	initscr();
	raw();
	noecho();
	getmaxyx(stdscr, maxY, maxX);
}
