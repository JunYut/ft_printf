/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_hexa_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:35:50 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/07 13:19:02 by tjun-yu          ###   ########.fr       */
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
	i = -1;
	while (decimal != 0)
	{
		if (decimal % 16 > 10)
			hexa[++i] = decimal % 16 + 'a' - 10;
		else
			hexa[++i] = decimal % 16 + '0';
		decimal /= 16;
	}
	reverse_arr(hexa);
	return (hexa);
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
	low_hexa = decimal_to_hexa(arg);
	ft_strlcat(parsed_arg, low_hexa, 64);
	return (parsed_arg);
}
