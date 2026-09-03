#include "libs.h"

void startScreen(Player *player) {
	initScreen();
	printw("Name: %s\n", player->name);
	printw("Press (q) for pick your role, naturale and pet\n");
	mvprintw(maxY - 1, maxX - 32, "Press (p) for change your name");
	refresh();
	getch();
}
