#ifndef DECLARATIONS_H
# define DECLARATIONS_H

#include "libs.h"

Player *initPlayer();
void nameInput(char *name);
void startScreen(Player *player);
void initScreen();
void takeNewName(char *name);
void PrintDataStructure(Player *player, WINDOW *win, char c);
void WindowInfo(Player *player, char c);
void freePlayer(Player **player);

#endif
