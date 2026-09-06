#include "libs.h"

static void welcomeOutput(char *name) {
	printw("Name: %s\n", name);
	printw("Press (r) for pick your role\n");
	printw("Press (p) for pick your pet\n");
	printw("Press (g) for pick your gender\n");
	printw("Press (n) for pick your naturale\n");
	printw("Press (q) for exit\n");
	mvprintw(maxY - 1, maxX - 21, "Press (i) for rename\n");
	refresh();
}

static bool is_rpgn(char c) {
	return (c == 'r' || c == 'p' || c == 'g' || c == 'n');
}

void startScreen(Player *player) {
	initScreen();
	welcomeOutput(player->name);
	while (1) {
		char ch = getch();
		if (ch == 'i') {
			takeNewName(player->name);
			welcomeOutput(player->name);
		}
		else if (is_rpgn(ch) == true){
			clear();
			inputWindow(player, ch);
		}
		else if (ch == 'q')
			break;
	}
}
