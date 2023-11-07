# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
SRC_DIR = src/
SOURCES = 	ft_printf.c char_parser.c str_parser.c ptr_parser.c decimal_parser.c\
			int_parser.c unsigned_parser.c low_hexa_parser.c up_hexa_parser.c
SRC_PATH = $(addprefix $(SRC_DIR), $(SOURCES))
LIBFT_DIR = libft/
LIBFT_OBJS = $(addprefix $(LIBFT_DIR), $(wildcard *.o))
OBJECTS = $(SRC_PATH:.c=.o)
NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_OBJS)
	ar rcs $@ $^

$(LIBFT_OBJS):
	make all -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)$(LIBFT_OBJS)
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re