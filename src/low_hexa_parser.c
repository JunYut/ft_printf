/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_hexa_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:35:50 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/06 15:53:07 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	reverse_arr(char *hexa)
{
	char	temp;
	int		size;
	int		i;

	size = ft_strlen(hexa);
	i = -1;
	while (++i < size / 2)
	{
		temp = hexa[i];
		hexa[i] = hexa[size - i - 1];
		hexa[size - i - 1] = temp;
	}
}

char	*decimal_to_hexa(uintptr_t decimal)
{
	char	*hexa;
	int		i;

	hexa = (char *)malloc(64 * sizeof(char));
	if (hexa == NULL)
		return (NULL);
	ft_memset(hexa, 0, sizeof(hexa));
	i = 0;
	while (decimal != 0)
	{
		hexa[i++] = decimal % 16;
		decimal /= 16;
	}
	reverse_arr(hexa);
	return (hexa);
}

void	hexa_to_a(char **hexa)
{
	while(**hexa != 'Z')
	{
		if (**hexa >= '0' && **hexa <= '9')
			**hexa += '0';
		else if (**hexa >= 'a' && **hexa <= 'f')
			**hexa += 87;
		++(*hexa);
	}
}

const char	*low_hexa_parser(va_list args)
{
	char		*parsed_arg;
	uintptr_t	arg;
	char		*low_hexa;

	parsed_arg = (char *)malloc(64 * sizeof(char));
	if (parsed_arg == NULL)
		return (NULL);
	arg = va_arg(args, uintptr_t);
	ft_strlcat(parsed_arg, "0x", sizeof(parsed_arg));
	low_hexa = decimal_to_hexa(arg);
	hexa_to_a(&low_hexa);
	ft_strlcat(parsed_arg, low_hexa, sizeof(parsed_arg));
	free(low_hexa);
	return (parsed_arg);
}
