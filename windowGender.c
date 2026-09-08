#include "libs.h"

static bool validOptions(char c) {
	return (c == 'm' || c == 'f' || c == '[' || c == ';' || c == '=' || c == 'q');
}

char genderWindow(Player **player) {
	WINDOW *win = newwin(13, 25, 0, 35);
	mvwprintw(win, 1, 1, "Pick a gender");
	mvwprintw(win, 4, 1, "m - male");
	mvwprintw(win, 5, 1, "f - female");
	mvwprintw(win, 8, 1, "[ - pick role first");
	mvwprintw(win, 9, 1, "; - pick pet first");
	mvwprintw(win, 10, 1, "= - pick naturale first");
	mvwprintw(win, 11, 1, "q - quit");
	wrefresh(win);
	
	char inputC;
	while (1) {
		inputC = wgetch(win);
		if (validOptions(inputC) == true)
			break;
	}
	switch (inputC) {
		case 'm':
			allocerOpts(&(*player)->gender, "male");
			inputC = findNextStat(*player, 'g');
			break;
		case 'f':
			allocerOpts(&(*player)->gender, "female");
			inputC = findNextStat(*player, 'g');
			break;
		case '[':
			inputC = 'r';
			break;
		case ';':
			inputC = 'p';
			break;
		case '=':
			inputC = 'n';
			break;
		case 'q':
			inputC = 'q';
			break;
	}
	wclear(win);
	wrefresh(win);
	delwin(win);
	return inputC;
}
