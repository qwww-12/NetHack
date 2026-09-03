#include "libs.h"

int maxY, maxX;

int main(){
	Player *player = initPlayer();
	nameInput(player->name);
	startScreen(player);
	// WindowInfo(player);
	endwin();
	freePlayer(&player);
}
