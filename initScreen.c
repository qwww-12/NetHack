#include "libs.h"

void initScreen() {
	initscr();
	raw();
	noecho();
	start_color();
	// keypad(stdscr, TRUE);
}
