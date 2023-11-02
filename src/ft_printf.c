/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:40:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/02 15:51:52 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	is_format_specifier(const char *format)
{
	if (*(format + 1) == 'c')
		return (1);
	else if (*(format + 1) == 's')
		return (2);
	else if (*(format + 1) == 'p')
		return (3);
	else if (*(format + 1) == 'd')
		return (4);
	else if (*(format + 1) == 'i')
		return (5);
	else if (*(format + 1) == 'u')
		return (6);
	else if (*(format + 1) == 'x')
		return (7);
	else if (*(format + 1) == 'X')
		return (8);
	else if (*(format + 1) == '%')
		return (9);
	return (0);
}

static char	*arg_parser(int format_specifier, va_list args)
{
	char	*arg_str;
	
	if (format_specifier == 1)
		arg_str = char_parser()
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		format_specifier;
	size_t	len;
	int		i;

	i = -1;
	while (format[++i] != 0)
	{
		format_specifier = 0;
		if (format[i] == '%')
			if ((format_specifier = is_format_specifier(format + i)) != 0)
				
		else
			write(1, format + i, 1);
	}
}

/*
*/
int main(void)
{
	printf("Original:\n");
	printf("%d\n")
}
