#include "libs.h"

void takeNewName(Player *player) {
	int i = 0;
	
	clear();
	echo();
	printw("Enter your new name: ");
	while (i < 10) {
		char c = getch();
		if ((!isalnum(c) && c != '\n') || (i == 0 && c == '\n'))
			continue;
		else if (c == '\n')
			break;
		player->name[i] = c;
		i++;
	}
	player->name[i] = 0;
	clear();
	noecho();
}

void PrintDataStructure(Player *player, WINDOW *win) {
	wprintw(win, "name: %s\n", player->name);
	if (!player->gender)
		wprintw(win, "gender: not specified\n");
	else
		wprintw(win, "gender: %s\n", player->gender);

	if (!player->role)
		wprintw(win, "role: not specified\n");
	else
		wprintw(win, "role: ");

	if (!player->pet)
	else
	
	if (!player->naturale)
	else
}
