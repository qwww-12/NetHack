#include "declarations.h"

void WindowInfo(Player *player, char c) {
	WINDOW *pwin= newwin(7, 27, 0, 0);
	if (!pwin) {
		free(player);
		exit (1);
	}
	refresh();
	box(pwin, 0, 0);
	wrefresh(pwin);
	PrintDataStructure(player, pwin, c);
	getch();
	delwin(pwin);
}
