#include "libs.h"

void	freePlayer(Player **player) {
	memset((*player)->name, 0, strlen((*player)->name));
	free((*player)->gender);
	free((*player)->pet);
	free((*player)->naturale);
	free(*player);
	(*player)->gender = (*player)->pet = (*player)->naturale = NULL;
	*player = NULL;
}
