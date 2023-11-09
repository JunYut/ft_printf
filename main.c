#include "ft_printf.h"

//_____________________________________________________________________________
#define DIVIDER printf("---------------------------------------------------\n")
#define LOG_RETURN(RETURN) printf("Return: %d\n", RETURN)
#define NEW_LINE printf("\n");

//_____________________________________________________________________________
void char_tester();
void str_tester();
void ptr_tester(int *);
void decimal_tester();
void int_tester();
void unsigned_tester();
void low_hexa_tester();
void up_hexa_tester();
void mix_tester();

//_____________________________________________________________________________
int main(void)
{
	int num = 0;
	int *ptr = &num;

	printf("no specifier:\n\n");
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
	mix_tester();
	printf("Original: %%\n");
	ft_printf("ft_:      %%\n");
	DIVIDER;
}

//_____________________________________________________________________________
void char_tester()
{
	int	count;
	printf("char_tester:\n\n");

	count = printf("Original: %c\n", 'C');
	LOG_RETURN(count);
	count = printf(" %c %c %c ", '0', 0, '1');	NEW_LINE
	LOG_RETURN(count);
	NEW_LINE
	count = ft_printf("ft_:      %c\n", 'C');
	LOG_RETURN(count);
	count = ft_printf(" %c %c %c ", '0', 0, '1');	NEW_LINE
	LOG_RETURN(count);
	DIVIDER;
}

void str_tester()
{
	int	count;
	printf("str_tester:\n\n");

	count = printf("Original: %s\n", "Hello World!");
	LOG_RETURN(count);
	count = printf(" NULL %s NULL ", NULL);	NEW_LINE
	LOG_RETURN(count);
	NEW_LINE
	count = ft_printf("ft_:      %s\n", "Hello World!");
	LOG_RETURN(count);
	count = ft_printf(" NULL %s NULL ", NULL);	NEW_LINE
	LOG_RETURN(count);
	DIVIDER;
}

void ptr_tester(int *ptr)
{
	int	count;
	printf("ptr_tester:\n\n");

	count = printf("Original: %p\n", ptr);
	LOG_RETURN(count);
	count = printf(" %p %p ", (void *)0, (void *)0); NEW_LINE
	LOG_RETURN(count);
	count = printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); NEW_LINE
	LOG_RETURN(count);
	count = printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX);	NEW_LINE
	LOG_RETURN(count);
	NEW_LINE //----------------------------------------------------------------
	count = ft_printf("ft_:      %p\n", ptr);
	LOG_RETURN(count);
	count = ft_printf(" %p %p ", 0, 0);	NEW_LINE
	LOG_RETURN(count);
	count = ft_printf(" %p %p ", LONG_MIN, LONG_MAX); NEW_LINE
	LOG_RETURN(count);
	count = ft_printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX);	NEW_LINE
	LOG_RETURN(count);
	DIVIDER;
}

void decimal_tester()
{
	int	count;
	printf("decimal_tester:\n\n");

	count = printf("Original: %d\n", 69420);
	LOG_RETURN(count);
	NEW_LINE
	count = ft_printf("ft_:      %d\n", 69420);
	LOG_RETURN(count);
	DIVIDER;
}

void int_tester()
{
	int	count;
	printf("int_tester:\n\n");

	count = printf("Original: %i\n", 69420);
	LOG_RETURN(count);
	NEW_LINE
	count = ft_printf("ft_:      %i\n", 69420);
	LOG_RETURN(count);
	DIVIDER;
}

void unsigned_tester()
{
	int	count;
	printf("unsigned_tester:\n\n");

	count = printf("Original: %u\n", -69420);
	LOG_RETURN(count);
	NEW_LINE
	count = ft_printf("ft_:      %u\n", -69420);
	LOG_RETURN(count);
	DIVIDER;
}

void low_hexa_tester()
{
	int	count;
	printf("low_hexa_tester:\n\n");

	count = printf("Original: %x\n", 100000);
	LOG_RETURN(count);
	count = printf(" %x ", 0);	NEW_LINE
	LOG_RETURN(count);
	count = printf(" %x ", (unsigned int)LONG_MAX);	NEW_LINE
	LOG_RETURN(count);
	count = printf(" %x ", (unsigned int)LONG_MIN);	NEW_LINE
	LOG_RETURN(count);
	NEW_LINE //----------------------------------------------------------------
	count = ft_printf("ft_:      %x\n", 100000);
	LOG_RETURN(count);
	count = ft_printf(" %x ", 0);	NEW_LINE
	LOG_RETURN(count);
	count = ft_printf(" %x ", LONG_MAX);	NEW_LINE
	LOG_RETURN(count);
	count = ft_printf(" %x ", LONG_MIN);	NEW_LINE
	LOG_RETURN(count);
	DIVIDER;
}

void up_hexa_tester()
{
	int	count;
	printf("up_hexa_tester:\n\n");

	count = printf("Original: %X\n", 1000);
	LOG_RETURN(count);
	NEW_LINE
	count = ft_printf("ft_:      %X\n", 1000);
	LOG_RETURN(count);
	DIVIDER;
}

void mix_tester()
{
	int count;
	printf("mix_tester:\n\n");

	count = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
	 %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
	  %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
	  'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	NEW_LINE
	LOG_RETURN(count);
	NEW_LINE //----------------------------------------------------------------
	count = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
	 %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%\
	  %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
	  'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	NEW_LINE
	LOG_RETURN(count);
	DIVIDER;
}
