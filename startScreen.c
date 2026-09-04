#include "libs.h"

static void welcomeOutput(Player *player) {
	printw("Name: %s\n", player->name);
	printw("Press (y) for pick your role, naturale and pet\n");
	printw("Press (q) for exit\n");
	mvprintw(maxY - 1, maxX - 32, "Press (p) for change your name");
	refresh();
}

void startScreen(Player *player) {
	initScreen();
	while (1) {
		welcomeOutput(player);
		char ch = getch();
		if (ch == 'p') {
			clear();
			takeNewName(player);
			clear();
		}
		else if (ch == 'y'){}
		else if (ch == 'q')
			break;
	}
}
