# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
SRC_DIR = src
INCL_DIR = include
SOURCES = 
OBJECTS = $(SOURCES:.c=.o)
NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): 
	ar rcs $@ $^
	ranlib $@

clean:
	rm -f

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re