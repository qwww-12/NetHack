#include "libs.h"

static bool validOptions(char c) {
	return (c == 'c' || c == 'f' || c == 'o' || c == '[' || c == ';' || c == '=' || c == 'q');
}

char petWindow(char **pet) {
	WINDOW *win = newwin(14, 25, 0, 35);
	refresh();
	mvwprintw(win, 1, 1, "Pick a pet");
	mvwprintw(win, 4, 1, "c - cat");
	mvwprintw(win, 5, 1, "f - fog");
	mvwprintw(win, 6, 1, "o - owl");
	mvwprintw(win, 9, 1, "[ - pick role first");
	mvwprintw(win, 10, 1, "; - pick gender first");
	mvwprintw(win, 11, 1, "= - pick naturale first");
	mvwprintw(win, 12, 1, "q - quit");
	box(win, 0, 0);
	wrefresh(win);
	char c = 0, inputC;
	while (1) {
		inputC = wgetch(win);
		if (validOptions(inputC) == true)
			break;
	}
	switch (inputC) {
		case 'c':
			if (*pet != NULL && *pet[0] != 'c') {
				free(*pet);
				*pet = NULL;
			}
			if (*pet == NULL)
				*pet = strdup("cat");
			break;
		case 'f':
			if (*pet != NULL && *pet[0] != 'f') {
				free(*pet);
				*pet = NULL;		
			}
			if (*pet == NULL)
				*pet = strdup("fog");
			break;
		case 'o':
			if (*pet != NULL && *pet[0] != 'o') {
				free(*pet);
				*pet = NULL;
			}
			if (*pet == NULL)
				*pet = strdup("owl");
			break;
		case '[':
			c = 'r';
			break;
		case ';':
			c = 'g';
			break;
		case '=':
			c = 'n';
			break;
		case 'q':
			c = 'q';
			break;
	}
	delwin(win);
	return c;
}
