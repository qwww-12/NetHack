#include "libs.h"

static bool validOptions(char c) {
	return (c == 'c' || c == 'f' || c == 'o' || c == '[' || c == ';' || c == '=' || c == 'q');
}

char petWindow(Player **player) {
	WINDOW *win = newwin(16, 26, 0, 35);
	refresh();
	mvwprintw(win, 1, 1, "Pick a pet");
	mvwprintw(win, 4, 1, "c - cat");
	mvwprintw(win, 5, 1, "f - fog");
	mvwprintw(win, 6, 1, "o - owl");
	mvwprintw(win, 9, 1, "[ - pick role first");
	mvwprintw(win, 10, 1, "; - pick gender first");
	mvwprintw(win, 11, 1, "= - pick naturale first");
	mvwprintw(win, 12, 1, "q - quit");
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_color(COLOR_BLUE, 0, 0, 999); 
	wattron(win, COLOR_PAIR(2));
	box(win, 0, 0);
	wrefresh(win);
	wattroff(win, COLOR_PAIR(2));
	char inputC;
	while (1) {
		inputC = wgetch(win);
		if (validOptions(inputC) == true)
			break;
	}
	switch (inputC) {
		case 'c':
			allocerOpts(&(*player)->pet, "cat");
			inputC = findNextStat(*player, 'p');
			break;
		case 'f':
			allocerOpts(&(*player)->pet, "fog");
			inputC = findNextStat(*player, 'p');
			break;
		case 'o':
			allocerOpts(&(*player)->pet, "owl");
			inputC = findNextStat(*player, 'p');
			break;
		case '[':
			inputC = 'r';
			break;
		case ';':
			inputC = 'g';
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
