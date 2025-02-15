/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:42:49 by anakin            #+#    #+#             */
/*   Updated: 2025/02/15 16:05:17 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_usgnd_long_nbr_hex(unsigned long int nbr)
{
	int	count;

	count = 0;
	if (nbr < 16)
	{
		write(1, &"0123456789abcdef"[nbr], 1);
		return (1);
	}
	count += ft_print_usgnd_long_nbr_hex(nbr / 16);
	write(1, &"0123456789abcdef"[nbr % 16], 1);
	return (count + 1);
}

int	ft_putptr(void *ptr)
{
	write(1, "0x", 2);
	return (ft_print_usgnd_long_nbr_hex((unsigned long int)ptr) + 2);
}

// #include <stdio.h>
// int main(void)
// {
// 	int nbr = 42;
// 	int *ptr = &nbr;
// 	printf("%p\n", ptr);
// 	return (0);
// }
