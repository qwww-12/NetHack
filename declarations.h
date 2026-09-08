#ifndef DECLARATIONS_H
# define DECLARATIONS_H

#include "libs.h"

Player *initPlayer();
void nameInput(char *name);
void startScreen(Player *player);
void initScreen();
void manipulateOptWindow(Player *player, char c);
void takeNewName(char *name);
void PrintDataStructure(Player *player, WINDOW *win, char c);
void WindowInfo(Player *player, char c);
void freePlayer(Player **player);
char genderWindow(Player **gender);
char petWindow(Player **player);
char naturaleWindow(Player **player);
void allocerOpts(char **src, const char *s);
char findNextStat(Player *player, char c);

#endif
