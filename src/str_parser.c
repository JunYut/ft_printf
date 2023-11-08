/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:33:38 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/08 15:01:40 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

const char	*str_parser(va_list args)
{
	char	*parsed_arg;
	char	*arg;
	size_t	len;

	arg = va_arg(args, char *);
	if (arg == NULL)
		return (ft_strdup("(null)"));
	len = ft_strlen(arg);
	parsed_arg = (char *)malloc((len + 1) * sizeof(char));
	if (parsed_arg == NULL)
		return (NULL);
	*parsed_arg = 0;
	ft_strlcpy(parsed_arg, arg, len + 1);
	parsed_arg[len] = 0;
	return (parsed_arg);
}
