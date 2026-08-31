#include "libs.h"

void first_info_handling(Player *player) {
	write(STDOUT_FILENO, REQ_NAME, strlen(REQ_NAME));
	while (true) {
		read(STDIN_FILENO, _buffer, BUFFER_SIZE);
		if (strlen(_buffer) - 1 > MAX_NAME_SIZE) {
			write(STDERR_FILENO, BAD_NAME, strlen(BAD_NAME));
			continue;
		}
		player->name = _buffer;
		break;
	}
	write(STDOUT_FILENO, REQ_GEN, strlen(REQ_GEN));
	while (true) {
		read(STDOUT_FILENO, _buffer, BUFFER_SIZE);
		if (strlen(_buffer) - 1 != 1 || (_buffer[0] != 'M' && _buffer[1] != 'F')) {
			write(STDERR_FILENO, BAD_GEN, strlen(BAD_GEN));
			continue;
		}
		player->gender = _buffer[0];
		break;
	}
}

int main(){
	Player *player = (Player *)malloc(sizeof(Player));
	first_info_handling(player);
	free(player);
}
