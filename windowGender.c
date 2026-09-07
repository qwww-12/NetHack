#include "libs.h"

char genderWindow(Player *player) {
	WINDOW *win = newwin(12, 25, 0, 35);
	mvwprintw(win, 1, 1, "Pick a gender");
	mvwprintw(win, 4, 1, "m - male");
	mvwprintw(win, 5, 1, "f - female");
	mvwprintw(win, 8, 1, "[ - pick role first");
	mvwprintw(win, 9, 1, "; - pick pet first");
	mvwprintw(win, 10, 1, "= - pick naturale first");
	wrefresh(win);
	char c = getch();
	delwin(win);
	return c;
}
