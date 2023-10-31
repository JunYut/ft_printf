# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
SRC_DIR = src/
SOURCES = ft_printf.c
SRC_PATH = $(addprefix SRC_DIR, $(SOURCES))
OBJECTS = $(SRC_PATH:.c=.o)
NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^
	ranlib $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re