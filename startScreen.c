#include "libs.h"

static void welcomeOutput(char *name) {
	printw("Name: %s\n", name);
	printw("Press (r) for pick your role\n");
	printw("Press (p) for pick your pet\n");
	printw("Press (g) for pick your gender\n");
	printw("Press (n) for pick your naturale\n");
	printw("Press (q) for exit\n");
	mvprintw(LINES - 1, COLS - 21, "Press (i) for rename\n");
	refresh();
}

static bool is_rpgnq(char c) {
	return (c == 'r' || c == 'p' || c == 'g' || c == 'n' || c == 'q');
}

void startScreen(Player *player) {
	char ch;

	initScreen();
	welcomeOutput(player->name);
	while (1) {
		ch = getch();
		if (ch == 'i') {
			takeNewName(player->name);
			welcomeOutput(player->name);
		}
		else if (is_rpgnq(ch) == true){
			clear();
			break;
		}
	}
	manipulateOptWindow(player, ch);
}
