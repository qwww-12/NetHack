#include "libs.h"

void manipulateOptWindow(Player *player, char inputC) {
	char ret = inputC;

	while (1) {
		if (ret != 0) {
			if (ret == 'q')
				break;
			WindowInfo(player, ret);
			ret = 0;
		}
		if (inputC == 'g')
			ret = genderWindow(player->gender);
		if (inputC == 'p') {
			ret = petWindow(&player->pet);
			mvprintw(LINES - 1, 1, "ret = %c", ret);
		}
	}
}
