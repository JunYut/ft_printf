# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
SRC_DIR = src/
SOURCES = ft_printf.c
SRC_PATH = $(addprefix $(SRC_DIR), $(SOURCES))
OBJECTS = $(SRC_PATH:.c=.o)
NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): libft_all $(OBJECTS)
	ar rcs $@ $^
	ranlib $@

libft_all:
	@$(MAKE) -f libft/Makefile all

clean:
	@$(MAKE) -f libft/Makefile clean
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# PHONY rules
.PHONY: all clean fclean re