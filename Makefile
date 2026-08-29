GCC = gcc
CFLAGS = -Wall -Werror -Wextra -lncurses
SRC =	main.c
HDR = 	lib.h
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
