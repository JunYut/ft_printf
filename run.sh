MAKE_RE=$1
LEAK_CHECK=$2

if [[ MAKE_RE -eq "re" ]]; then
	make re
fi

cc -Wall -Wextra -Werror *.c -o a.out -Llibft -L. -lft -lftprintf

if [[ LEAK_CHECK -eq 1 ]]; then
	leaks -atExit -- ./a.out
else
	./a.out
fi
