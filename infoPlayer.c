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

void PrintDataStructure(Player *player) {
}
