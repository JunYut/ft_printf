/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:41:12 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/11/07 10:45:29 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <stddef.h>
# include <stdio.h>

# include "libft/libft.h"

int			ft_printf(const	char *format, ...);

const char	*arg_parser(const char *format, va_list args);
const char	*char_parser(va_list args);
const char	*str_parser(va_list args);
const char	*ptr_parser(va_list args);
const char	*decimal_parser(va_list args);
const char	*int_parser(va_list args);
const char	*unsigned_parser(va_list args);
const char	*low_hexa_parser(va_list args);
const char	*up_hexa_parser(va_list args);

void		reverse_arr(char *hexa);
char		*decimal_to_hexa(uintptr_t decimal);

#endif