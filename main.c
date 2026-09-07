#include "libs.h"

int main(){
	Player *player = initPlayer();
	nameInput(player->name);
	startScreen(player);
	endwin();
	freePlayer(&player);
}
