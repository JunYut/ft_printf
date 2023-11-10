/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:32:00 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/03 15:55:13 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static uintptr_t	decimal_to_hexa(uintptr_t ptr)
{
	
}
static char	*hexa_to_a(uintptr_t ptr)
{
	
}

const char	*ptr_parser(va_list args)
{
	char		parsed_arg[64];
	uintptr_t	arg;
	size_t		digits;

	arg = va_arg(args, uintptr_t);
	ft_strlcat(parsed_arg, "0x", sizeof(parsed_arg));
	ft_strlcat(parsed_arg, hexa_to_a(arg), sizeof(parsed_arg));
	return (parsed_arg);
}
