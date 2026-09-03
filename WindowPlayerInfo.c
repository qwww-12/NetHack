#include "declarations.h"

void WindowInfo(Player *player) {
	int maxY, maxX;
	getmaxyx(stdscr, maxY, maxX);
	refresh();
	(void)maxX;
	WINDOW *info_part = newwin(5, 20, maxY-maxY, maxX-maxX);
	if (!info_part) {
		free(player);
		exit (1);
	}
	refresh();
	box(info_part, 0, 0);
	mvwprintw(info_part, 1, 1, "  name: %s", player->name);
	if (player->gender == 'F')
		mvwprintw(info_part, 2, 1, "gender: Female");
	else
		mvwprintw(info_part, 2, 1, "gender: Male");
	wrefresh(info_part);
	getch();
	delwin(info_part);
}
