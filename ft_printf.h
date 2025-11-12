/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:36:47 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/13 00:42:10 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

int				ft_printf(const char *format, ...);
int				ft_print_char(int c);
int				ft_print_str(char *str);
int				ft_print_int(int nb);
unsigned int	ft_print_uint(unsigned int nb);
unsigned int	ft_print_hexl(unsigned int nb);
unsigned int	ft_print_hexu(unsigned int nb);
int				ft_print_ptr(void *ptr);

#endif
