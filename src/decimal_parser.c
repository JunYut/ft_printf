/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:34:26 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/06 15:44:45 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

const char	*decimal_parser(va_list args)
{
	char	*parsed_arg;
	int		arg;

	arg = va_arg(args, int);
	parsed_arg = ft_itoa(arg);
	return (parsed_arg);
}
