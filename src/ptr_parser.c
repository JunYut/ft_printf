/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:32:00 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/08 13:17:27 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static const char	*hexa_parser(va_list args)
{
	char		*parsed_arg;
	unsigned long long	arg;
	char		*low_hexa;

	parsed_arg = (char *)malloc(64 * sizeof(char));
	if (parsed_arg == NULL)
		return (NULL);
	ft_strlcpy(parsed_arg, "0x", 64);
	arg = va_arg(args, unsigned long long);
	low_hexa = decimal_to_hexa(arg);
	ft_strlcat(parsed_arg, low_hexa, 64);
	return (parsed_arg);
}

const char	*ptr_parser(va_list args)
{
	return(hexa_parser(args));
}
