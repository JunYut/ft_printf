LEAK_CHECK=$1

cc -Wall -Wextra -Werror *.c -o a.out -Llibft -L. -lft -lftprintf

if [[ LEAK_CHECK -eq 1 ]]; then
	leaks -atExit -- ./a.out
else
	./a.out
fi
