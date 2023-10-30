# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and targets
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