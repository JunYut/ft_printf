/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:40:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/06 15:51:47 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

const char	*arg_parser(const char *format, va_list args)
{
	const char	*arg_str;
	
	arg_str = 0;
	if (*(format + 1) == 'c')
		arg_str = char_parser(args);
	else if (*(format + 1) == 's')
		arg_str = str_parser(args);
	else if (*(format + 1) == 'p')
		arg_str = ptr_parser(args);
	else if (*(format + 1) == 'd')
		arg_str = decimal_parser(args);
	else if (*(format + 1) == 'i')
		arg_str = int_parser(args);
	else if (*(format + 1) == 'u')
		arg_str = unsigned_parser(args);
	else if (*(format + 1) == 'x')
		arg_str = low_hexa_parser(args);
	else if (*(format + 1) == 'X')
		arg_str = up_hexa_parser(args);
	else if (*(format + 1) == '%')
		arg_str = ft_strdup("%");
	return (arg_str);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*parsed_arg;
	int			len;
	int			i;

	va_start(args, format);
	len = 0;
	i = -1;
	while (format[++i] != 0)
	{
		if (format[i] == '%')
		{
			parsed_arg = arg_parser(format + i, args);
			len += ft_strlen(parsed_arg);
			ft_putstr_fd((char *)parsed_arg, 1);
		}
		else
		{
			++len;
			write(1, format + i, 1);
		}
	}
	va_end(args);
	return (len);
}
