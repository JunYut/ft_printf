/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_hexa_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:36:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/09 11:19:10 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	decimal_to_hexa(unsigned int decimal, char *parsed_arg)
{
	int		i;

	i = -1;
	while (decimal != 0)
	{
		if (decimal % 16 >= 10)
			parsed_arg[++i] = decimal % 16 + 'A' - 10;
		else
			parsed_arg[++i] = decimal % 16 + '0';
		decimal /= 16;
	}
	parsed_arg[i + 1] = 0;
	reverse_arr(parsed_arg);
}

const char	*up_hexa_parser(va_list args)
{
	char			*parsed_arg;
	unsigned int	arg;
	
	arg = va_arg(args, unsigned int);
	if (arg == 0)
		return (ft_strdup("0"));
	parsed_arg = (char *)malloc(64 * sizeof(char));
	if (parsed_arg == NULL)
		return (NULL);
	*parsed_arg = 0;
	decimal_to_hexa(arg, parsed_arg);
	return (parsed_arg);
}
