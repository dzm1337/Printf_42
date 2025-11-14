/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:27:51 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/14 17:16:06 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;
    int n = 42;
    unsigned int u = 3000;
    char c = 'Z';
    char *str = "Complex Test";

    printf("=== TESTE COMPLEXO ===\n");

    ret1 = printf(
        "Mix: char[%c] | string[%s] | int[%d] | uint[%u] | hex[%x/%X] | ptr[%p] | percent[%%]\n",
        c, str, n, u, 0xdeadbeef, 0xBEEF, &n
    );

    ret2 = ft_printf(
        "Mix: char[%c] | string[%s] | int[%d] | uint[%u] | hex[%x/%X] | ptr[%p] | percent[%%]\n",
        c, str, n, u, 0xdeadbeef, 0xBEEF, &n
    );

    printf("\nret printf = %d | ret ft_printf = %d\n", ret1, ret2);

    return 0;
}

