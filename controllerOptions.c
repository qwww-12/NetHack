#include "libs.h"

void manipulateOptWindow(Player *player, char inputC) {
	while (1) {
		if (inputC != 0) {
			if (inputC == 'q')
				return ;
			WindowInfo(player, inputC);
		}
		if (inputC == 'g')
			inputC = genderWindow(&player->gender);
		else if (inputC == 'p')
			inputC = petWindow(&player->pet);
	}
}
