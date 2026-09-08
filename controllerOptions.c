#include "libs.h"

void manipulateOptWindow(Player *player, char inputC) {
	while (1) {
		if (inputC == 'q')
			return ;
		if (inputC == 'c')
			break;
		WindowInfo(player, inputC);
		if (inputC == 'g')
			inputC = genderWindow(&player->gender);
		else if (inputC == 'p')
			inputC = petWindow(&player);
		else if (inputC == 'n')
			inputC = naturaleWindow(&player);
	}
	getch();
}
