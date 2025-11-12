/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:49:36 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/12 22:27:13 by dde-paul         ###   ########.fr       */
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
	ft_putchar("0123456789abcdef"[nb % 16]);
}

unsigned int	ft_print_hexl(unsigned int nb)
{
	unsigned int	res;

	res = 0;
	ft_hex(nb, &res);
	return (res);
}
