/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_hexa_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:36:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/06 15:54:01 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	up_hexa_to_a(char **hexa)
{
	while(**hexa != 'Z')
	{
		if (**hexa >= '0' && **hexa <= '9')
			**hexa += '0';
		else if (**hexa >= 'a' && **hexa <= 'f')
			**hexa += 55;
		++(*hexa);
	}
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
	ft_strlcat(parsed_arg, "0x", sizeof(parsed_arg));
	up_hexa = decimal_to_hexa(arg);
	up_hexa_to_a(&up_hexa);
	ft_strlcat(parsed_arg, up_hexa, sizeof(parsed_arg));
	free(up_hexa);
	return (parsed_arg);
}
