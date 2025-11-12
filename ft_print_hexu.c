/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:34:12 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/13 00:35:52 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(int c)
{
	write(1, &c, 1);
}

static void	ft_hex(unsigned int nb, unsigned int *sum)
{
	*sum += 1;
	if (nb >= 16)
		ft_hex(nb / 16, sum);
	ft_putchar("0123456789ABCDEF"[nb % 16]);
}

unsigned int	ft_print_hexu(unsigned int nb)
{
	unsigned int	res;

	res = 0;
	ft_hex(nb, &res);
	return (res);
}
