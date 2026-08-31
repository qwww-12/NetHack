#ifndef LIBS_H
# define LIBS_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>


# define REQ_NAME "Enter your name: "
# define REQ_GEN "Enter your gender F or M: "
# define BAD_NAME "Your length name greater than ten, try again: "
# define BAD_GEN "Enter M or F: "
# define MAX_NAME_SIZE 11
# define BUFFER_SIZE 256
char _buffer[BUFFER_SIZE];

typedef struct Player {
	char name[MAX_NAME_SIZE];
	char gender;
//	_role *role;
} Player;

#endif
