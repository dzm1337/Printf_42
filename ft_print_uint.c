/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:22:40 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/14 17:33:54 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(int c)
{
	write(1, &c, 1);
}

unsigned int	ft_print_uint(unsigned int nb)
{
	int	i;
	unsigned long long	n;
	int	count;

	i = 0;
	n = nb;
	if (n > 9)
		count += ft_print_uint(n / 10);
	count++;
	ft_putchar(nb + '0');
	return (count);
}
