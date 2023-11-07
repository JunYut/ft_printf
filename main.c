#include "ft_printf.h"

#define DIVIDER printf("---------------------------------------------------\n")

//_____________________________________________________________________________
void char_tester();
void str_tester();
void ptr_tester(int *);
void decimal_tester();
void int_tester();
void unsigned_tester();
void low_hexa_tester();
void up_hexa_tester();
void empty_NULL_tester();

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
	printf("Original: %c\n", 'C');
	ft_printf("ft_:      %c\n", 'C');
	DIVIDER;
}

void str_tester()
{
	printf("Original: %s\n", "Hello World!");
	ft_printf("ft_:      %s\n", "Hello World!");
	DIVIDER;
}

void ptr_tester(int *ptr)
{
	printf("Original: %p\n", ptr);
	ft_printf("ft_:      %p\n", ptr);
	DIVIDER;
}

void decimal_tester()
{
	printf("Original: %d\n", 69420);
	ft_printf("ft_:      %d\n", 69420);
	DIVIDER;
}

void int_tester()
{
	printf("Original: %i\n", 69420);
	ft_printf("ft_:      %i\n", 69420);
	DIVIDER;
}

void unsigned_tester()
{
	printf("Original: %u\n", -69420);
	ft_printf("ft_:      %u\n", -69420);
	DIVIDER;
}

void low_hexa_tester()
{
	printf("Original: %x\n", 1000);
	ft_printf("ft_:      %x\n", 1000);
	DIVIDER;
}

void up_hexa_tester()
{
	printf("Original: %X\n", 1000);
	ft_printf("ft_:      %X\n", 1000);
	DIVIDER;
}

void empty_NULL_tester()
{
	// printf("Original: %X\n",);
	ft_printf("ft_:      %X\n");
}
