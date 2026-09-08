#include "libs.h"

static bool validOptions(char c) {
	return (c == 'a' || c == 'o' || c == '[' || c == ';' || c == '=' || c == 'q');
}

char naturaleWindow(Player **player) {
	WINDOW *win = newwin(13, 23, 0, 35);
	refresh();
	mvwprintw(win, 1, 1, "Pick a naturale");
	mvwprintw(win, 4, 1, "a - a");
	mvwprintw(win, 5, 1, "o - o");
	mvwprintw(win, 8, 1, "[ - pick role first");
	mvwprintw(win, 9, 1, "; - pick gender first");
	mvwprintw(win, 10, 1, "= - pick pet first");
	mvwprintw(win, 11, 1, "q - quit");

	char inputC;
	while (1) {
		inputC = wgetch(win);
		if (validOptions(inputC) == true)
			break;
	}
	switch (inputC) {
		case 'a':
			allocerOpts(&(*player)->naturale, "a");
			inputC = findNextStat(*player, 'n');
			break;
		case 'o':
			allocerOpts(&(*player)->naturale, "o");
			inputC = findNextStat(*player, 'n');
			break;
		case '[':
			inputC = 'r';
			break;
		case ';':
			inputC = 'g';
			break;
		case '=':
			inputC = 'p';
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
