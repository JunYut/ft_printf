# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
SRC_DIR = src/
SOURCES = ft_printf.c
SRC_PATH = $(addprefix $(SRC_DIR), $(SOURCES))
LIBFT_DIR = libft/
LIBFT = libft.a
OBJECTS = $(SRC_PATH:.c=.o)
NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

$(OBJECTS): $(LIBFT)

$(LIBFT):
	make all -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIBFT_DIR)$(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re