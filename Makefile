GCC = gcc

CFLAGS =  -lncurses

SRC =	main.c			\
	WindowPlayerInfo.c	

HDR = 	lib.h		\
	declarations.h	

OBJ = $(SRC:.c=.o)

NAME = nethack

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) $^ -o $@

%.o: %.c $(HDR)
	$(GCC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
