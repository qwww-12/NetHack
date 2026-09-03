#include "libs.h"

static void buf_copy(char *name, char *buffer) {
	size_t i = 0;
	while (i < strlen(buffer) - 1 && buffer[i] != '\n') {
		name[i] = buffer[i];
		i++;
	}
	name[i] = '\0';
}

void nameInput(char *name) {
	char _buffer[BUFFER_SIZE];

	write(STDOUT_FILENO, REQ_NAME, strlen(REQ_NAME));
	while (true) {
		read(STDIN_FILENO, _buffer, BUFFER_SIZE);
		if (strlen(_buffer) - 1 > MAX_NAME_SIZE - 1) {
			memset(_buffer, 0, strlen(_buffer));
			write(STDERR_FILENO, BAD_NAME, strlen(BAD_NAME));
			continue;
		}
		buf_copy(name, _buffer);
		break;
	}
}

Player *initPlayer() {
	Player *player = (Player *)malloc(sizeof(Player));
	if (!player){
		printf("Dynamic allocation error of player struct\n");
		exit(1);
	}
	player->gender = NULL;
	player->pet = NULL;
	player->naturale = NULL;
	return player;	
}
