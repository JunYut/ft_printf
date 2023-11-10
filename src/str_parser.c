/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:33:38 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/03 15:33:50 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

const char	*str_parser(va_list args)
{
	char	*parsed_arg;

	parsed_arg = va_arg(args, char *);
	return (parsed_arg);
}
