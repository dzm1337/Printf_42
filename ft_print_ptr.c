/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:38:37 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/13 00:43:59 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_hex_long(unsigned long nb, int *sum)
{
	*sum += 1;
	if (nb >= 16)
		ft_hex_long(nb / 16, sum);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	ptr_value;
	int				sum;

	if (!ptr)
	{
		sum = 5;
		ft_putstr("(nil)");
	}
	else
	{
		sum = 2;
		ft_print_str("0x");
		ptr_value = (unsigned long)ptr;
		ft_hex_long(ptr_value, &sum);
	}
	return (sum);
}
