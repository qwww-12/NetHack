#include "libs.h"

void manipulateOptWindow(Player *player, char inputC) {
	while (1) {
		if (inputC == 'q')
			return;
		WindowInfo(player, inputC);
		if (inputC == 'c')
			break;
		if (inputC == 'g')
			inputC = genderWindow(&player);
		else if (inputC == 'p')
			inputC = petWindow(&player);
		else if (inputC == 'n')
			inputC = naturaleWindow(&player);
	}
	getch();
}
