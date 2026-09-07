#include "libs.h"

char genderWindow(char *gender) {
	WINDOW *win = newwin(13, 25, 0, 35);
	mvwprintw(win, 1, 1, "Pick a gender");
	mvwprintw(win, 4, 1, "m - male");
	mvwprintw(win, 5, 1, "f - female");
	mvwprintw(win, 8, 1, "[ - pick role first");
	mvwprintw(win, 9, 1, "; - pick pet first");
	mvwprintw(win, 10, 1, "= - pick naturale first");
	mvwprintw(win, 11, 1, "q - quit");
	wrefresh(win);
	
	char inputC = wgetch(win);
	char c = 0;
	switch (inputC) {
		case 'm':
			if (gender != NULL && gender[0] == 'f')
				free(gender);
			if (gender == NULL)
				gender = strdup("male");
			break;
		case 'f':
			if (gender != NULL && gender[0] == 'm')
				free(gender);
			if (gender == NULL)
				gender = strdup("female");
			break;
		case '[':
			c = 'r';
			break;
		case ';':
			c = 'p';
			break;
		case '=':
			c = 'n';
			break;
		case 'q':
			c = 'q';
			break;
	}
	if (c != 0)
		clear();
	delwin(win);
	return c;
}
