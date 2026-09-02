#include "declarations.h"

void WindowInfo(Player *player) {
	WINDOW *info_part = newwin(5, 20, 10, 10);
	if (!info_part) {
		free(player);
		exit (1);
	}
	box(info_part, 0, 0);
	getch();
	delwin(info_part);
}
