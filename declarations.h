#ifndef DECLARATIONS_H
# define DECLARATIONS_H

#include "libs.h"

Player *initPlayer();
void nameInput(char *name);
void startScreen(Player *player);
void initScreen();
void WindowInfo(Player *player);
void freePlayer(Player **player);

#endif
