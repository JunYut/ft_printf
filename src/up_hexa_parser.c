/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_hexa_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:36:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/07 13:29:24 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*decimal_to_up_hexa(uintptr_t decimal)
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
			hexa[++i] = decimal % 16 + 'A' - 10;
		else
			hexa[++i] = decimal % 16 + '0';
		decimal /= 16;
	}
	reverse_arr(hexa);
	free(hexa);
	return (hexa);
}

const char	*up_hexa_parser(va_list args)
{
	char		*parsed_arg;
	uintptr_t	arg;
	char		*up_hexa;

	parsed_arg = (char *)malloc(64 * sizeof(char));
	if (parsed_arg == NULL)
		return (NULL);
	arg = va_arg(args, uintptr_t);
	up_hexa = decimal_to_up_hexa(arg);
	ft_strlcat(parsed_arg, up_hexa, 64);
	return (parsed_arg);
}
