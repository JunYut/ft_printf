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
LIBFT_SRCS = $(wildcard $(LIBFT_DIR)*.c)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)
LIBFT = $(LIBFT_DIR)libft.a

NAME = libftprintf.a

# Rules and recipes
all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_OBJS)
	ar rcs $@ $^

$(LIBFT_OBJS): $(LIBFT)

$(LIBFT):
	make all -C $(LIBFT_DIR)
	rm -f $@

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re