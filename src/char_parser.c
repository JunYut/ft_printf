/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:33:08 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/08 11:47:43 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

const char	*char_parser(va_list args)
{
	char	*parsed_arg;
	char	arg;

	arg = va_arg(args, int);
	parsed_arg = (char *)malloc(2);
	if (parsed_arg == NULL)
		return (NULL);
	parsed_arg[0] = arg;
	parsed_arg[1] = 0;
	return (parsed_arg);
}
