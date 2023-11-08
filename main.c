#include "ft_printf.h"

#define DIVIDER printf("---------------------------------------------------\n")
#define LOG_RETURN(RETURN) printf("%d\n", RETURN)

//_____________________________________________________________________________
void char_tester();
void str_tester();
void ptr_tester(int *);
void decimal_tester();
void int_tester();
void unsigned_tester();
void low_hexa_tester();
void up_hexa_tester();

int main(void)
{
	int num = 0;
	int *ptr = &num;

	printf("Original:\n");
	ft_printf("ft_:     \n");
	DIVIDER;
	char_tester();
	str_tester();
	ptr_tester(ptr);
	decimal_tester();
	unsigned_tester();
	low_hexa_tester();
	up_hexa_tester();
	printf("Original: %%\n");
	ft_printf("ft_:      %%\n");
	DIVIDER;
}

void char_tester()
{
	printf("char_tester:\n\n");

	LOG_RETURN(printf("Original: %c\n", 'C'));
	LOG_RETURN(ft_printf("ft_:      %c\n", 'C'));
	DIVIDER;
}

void str_tester()
{
	printf("str_tester:\n\n");

	LOG_RETURN(printf("Original: %s\n", "Hello World!"));
	LOG_RETURN(ft_printf("ft_:      %s\n", "Hello World!"));
	DIVIDER;
}

void ptr_tester(int *ptr)
{
	printf("ptr_tester:\n\n");

	LOG_RETURN(printf("Original: %p\n", ptr));
	LOG_RETURN(ft_printf("ft_:      %p\n", ptr));
	DIVIDER;
}

void decimal_tester()
{
	printf("decimal_tester:\n\n");

	LOG_RETURN(printf("Original: %d\n", 69420));
	LOG_RETURN(ft_printf("ft_:      %d\n", 69420));
	DIVIDER;
}

void int_tester()
{
	printf("int_tester:\n\n");

	LOG_RETURN(printf("Original: %i\n", 69420));
	LOG_RETURN(ft_printf("ft_:      %i\n", 69420));
	DIVIDER;
}

void unsigned_tester()
{
	printf("unsigned_tester:\n\n");

	LOG_RETURN(printf("Original: %u\n", -69420));
	LOG_RETURN(ft_printf("ft_:      %u\n", -69420));
	DIVIDER;
}

void low_hexa_tester()
{
	printf("low_hexa_tester:\n\n");

	LOG_RETURN(printf("Original: %x\n", 1000));
	LOG_RETURN(ft_printf("ft_:      %x\n", 1000));
	DIVIDER;
}

void up_hexa_tester()
{
	printf("up_hexa_tester:\n\n");

	LOG_RETURN(printf("Original: %X\n", 1000));
	LOG_RETURN(ft_printf("ft_:      %X\n", 1000));
	DIVIDER;
}

