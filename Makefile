# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
SRC_DIR = src/
SOURCES = 	ft_printf.c char_parser.c str_parser.c ptr_parser.c decimal_parser.c\
			int_parser.c unsigned_parser.c low_hexa_parser.c up_hexa_parser.c
SRC_PATH = $(addprefix $(SRC_DIR), $(SOURCES))
OBJECTS = $(SRC_PATH:.c=.o)

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	mv $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# PHONY rules
.PHONY: all clean fclean re