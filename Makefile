CC := gcc

#CFLAGS := -Wall -Werror -Wextra

LIBS := -lncurses

SRC :=	main.c			\
	initStructPlayer.c	\
	initScreen.c		\
	startScreen.c		\
	infoPlayer.c	\
	WindowPlayerInfo.c	\
	structureFree.c

HDR := 	libs.h		\
	declarations.h	

OBJ := $(SRC:.c=.o)

RUN = clear && ./$(TARGET)

TARGET := nethack

run: all clean
	$(RUN)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LIBS) $^ -o $@

%.o: %.c $(HDR)
	$(CC) $(LIBS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
