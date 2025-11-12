/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:39:58 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/13 00:41:13 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_type(char spec, va_list args)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count = (ft_print_char(va_arg(args, int)));
	else if (spec == 's')
		count = (ft_print_str(va_arg(args, char *)));
	else if (spec == 'i' || spec == 'd')
		count = (ft_print_int(va_arg(args, int)));
	else if (spec == 'u')
		count = (ft_print_uint(va_arg(args, unsigned int)));
	else if (spec == 'x')
		count = (ft_print_hexl(va_arg(args, unsigned int)));
	else if (spec == 'X')
		count = (ft_print_hexu(va_arg(args, unsigned int)));
	else if (spec == 'p')
		count = (ft_print_ptr(va_arg(args, void *)));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			res;	
	int			count;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				res = ft_print_char('%');
			else
				res = ft_format_type(format[i], args);
		}
		else
			res = ft_print_char(format[i]);
		count += res;
		i++;
	}
	va_end(args);
	return (count);
}
