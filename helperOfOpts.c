#include "libs.h"

void allocerOpts(char **src, const char *s) {
	if (*src != NULL && *src[0] != s[0]) {
		free(*src);
		*src = NULL;
	}
	if (*src == NULL)
		*src = strdup(s);
}

static char isNull(char *str, char c) {
	if (str == NULL)
		return 0;
	return c;
}

static char thisResult(char a, char b, char next1, char next2) {
	if (a == 0)
		return next1;
	if (b == 0)
		return next2;
	return 'c';
}

char findNextStat(Player *player, char c) {
	if (c == 'n') {
		char p = isNull(player->pet, 'p');
		char g = isNull(player->gender, 'g');
		return (thisResult(p, g, 'p', 'g'));
	}
	if (c == 'p') {
		char g = isNull(player->gender, 'g');
		char n = isNull(player->naturale, 'n');
		return (thisResult(g, n, 'g', 'n'));
	}
	if (c == 'g') {
		char n = isNull(player->naturale, 'n');
		char p = isNull(player->pet, 'p');
		return (thisResult(n, p, 'n', 'p'));
	}
	return 'r';
}
