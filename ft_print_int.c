/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:25:06 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/13 00:30:20 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(int c)
{
	write(1, &c, 1);
}

static int	ft_intlen(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i = 1;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_print_int(int nb)
{
	long long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_print_int(n / 10);
	ft_putchar(n % 10 + '0');
	return (ft_intlen(nb));
}