#include "libs.h"

static void welcomeOutput(char *name) {
	printw("Name: %s\n", name);
	printw("Press (r) for pick your role\n");
	printw("Press (p) for pick your pet\n");
	printw("Press (g) for pick your gender\n");
	printw("Press (n) for pick your naturale\n");
	printw("Press (q) for exit\n");
	mvprintw(maxY - 1, maxX - 32, "Press (p) for change your name");
	refresh();
}

void startScreen(Player *player) {
	initScreen();
	welcomeOutput(player->name);
	while (1) {
		char ch = getch();
		if (ch == 'p') {
			takeNewName(player->name);
			welcomeOutput(player->name);
		}
		else if (ch == 'r'){
			clear();
			WindowInfo(player, ch);
		}
		else if (ch == 'q')
			break;
	}
}
