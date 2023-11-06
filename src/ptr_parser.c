/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:32:00 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/06 15:10:18 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	reverse_arr(char *ptr_hexa)
{
	char	temp;
	int		size;
	int		i;

	size = ft_strlen(ptr_hexa);
	i = -1;
	while (++i < size / 2)
	{
		temp = ptr_hexa[i];
		ptr_hexa[i] = ptr_hexa[size - i - 1];
		ptr_hexa[size - i - 1] = temp;
	}
}

static char	*decimal_to_hexa(uintptr_t ptr_decimal)
{
	char	*hexa_ptr;
	int		i;

	hexa_ptr = (char *)malloc(64 * sizeof(char));
	if (hexa_ptr == NULL)
		return (NULL);
	ft_memset(hexa_ptr, 0, sizeof(hexa_ptr));
	i = 0;
	while (ptr_decimal != 0)
	{
		hexa_ptr[i++] = ptr_decimal % 16;
		ptr_decimal /= 16;
	}
	reverse_arr(hexa_ptr);
	return (hexa_ptr);
}

static void	hexa_to_a(char **ptr_hexa)
{
	while(**ptr_hexa != 'Z')
	{
		if (**ptr_hexa >= '0' && **ptr_hexa <= '9')
			**ptr_hexa += '0';
		else if (**ptr_hexa >= 'a' && **ptr_hexa <= 'f')
			**ptr_hexa += 87;
		++(*ptr_hexa);
	}
}

const char	*ptr_parser(va_list args)
{
	char		*parsed_arg;
	uintptr_t	arg;
	char		*ptr_hexa;

	parsed_arg = (char *)malloc(64 * sizeof(char));
	if (parsed_arg == NULL)
		return (NULL);
	arg = va_arg(args, uintptr_t);
	ft_strlcat(parsed_arg, "0x", sizeof(parsed_arg));
	ptr_hexa = decimal_to_hexa(arg);
	hexa_to_a(ptr_hexa);
	ft_strlcat(parsed_arg, ptr_hexa, sizeof(parsed_arg));
	return (parsed_arg);
}

/*
int main(void)
{
	
}
*/