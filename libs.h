#ifndef LIBS_H
# define LIBS_H

typedef struct Player Player;

# define REQ_NAME "Enter your name: "
# define BAD_NAME "Your length name greater than ten, try again: "
# define MAX_NAME_SIZE 11
# define BUFFER_SIZE 256

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include "declarations.h"

struct Player {
	char name[MAX_NAME_SIZE];
	char *naturale;
	char *pet;
//	_role *role;
};

#endif
