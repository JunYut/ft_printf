/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:35:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/09 11:44:24 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

const char	*unsigned_parser(va_list args)
{
	char			*parsed_arg;
	unsigned int	arg;

	arg = va_arg(args, unsigned int);
	parsed_arg = ft_itoa(arg);
	return (parsed_arg);
}
