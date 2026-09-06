#include "libs.h"

void takeNewName(char *name) {
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
		name[i] = c;
		i++;
	}
	name[i] = 0;
	clear();
	noecho();
}

void PrintDataStructure(Player *player, WINDOW *win, char c) {
	mvwprintw(win, 1, 1, "     name: %s", player->name);

	if (!player->pet) {
		if (c == 'p')
			mvwprintw(win, 3, 1, "     apet: choosing now");
		else
			mvwprintw(win, 3, 1, "     apet: not specified");
	}
	else
		mvwprintw(win, 3, 1, "     apet: %s", player->pet);
	if (!player->pet) {
		if (c == 'r')
			mvwprintw(win, 2, 1, "     role: choosing now");
		else
			mvwprintw(win, 2, 1, "     role: not specified");
	}
	else
		mvwprintw(win, 2, 1, "     role: ");
	if (!player->gender) {
		if (c == 'g')
			mvwprintw(win, 4, 1, "   gender: choosing now");
		else
			mvwprintw(win, 4, 1, "   gender: not specified");
	}
	else
		mvwprintw(win, 4, 1, "   gender: %s", player->gender);	
	if (!player->naturale) {
		if (c == 'n')
			mvwprintw(win, 5, 1, " naturale: choosing now");
		else
			mvwprintw(win, 5, 1, " naturale: not specified");
	}
	else
		mvwprintw(win, 5, 1, " naturale: %s", player->naturale);
	wrefresh(win);
}
