#include "libs.h"

void inputWindow(Player *player, char c) {
	char ch;

	WindowInfo(player, c);
	while (1) {
		if (c == 'g') {
			ch = genderWindow(player);
			WindowInfo(player, ch);
			break;
		}
	}
}
