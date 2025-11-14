/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:25:06 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/14 17:13:21 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_int(int nb)
{
	long long	n;
	int			count;

	count = 0;
	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		count++;
		n = -n;
	}
	if (n > 9)
		count += ft_print_int(n / 10);
	count++;
	ft_putchar((n % 10) + '0');
	return (count);
}
