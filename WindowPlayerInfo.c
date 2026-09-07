#include "declarations.h"

void WindowInfo(Player *player, char c) {
	WINDOW *pwin= newwin(7, 27, 0, 0);
	if (!pwin) {
		freePlayer(&player);
		exit (1);
	}
	refresh();
	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	wattron(pwin, COLOR_PAIR(1));
	box(pwin, 0, 0);
	wrefresh(pwin);
	wattroff(pwin, COLOR_PAIR(1));
	PrintDataStructure(player, pwin, c);
	delwin(pwin);
}
