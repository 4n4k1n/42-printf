/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:41:51 by anakin            #+#    #+#             */
/*   Updated: 2025/02/14 21:40:52 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int	negativ;

	negativ = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
		negativ = 1;
	}
	if (n < 10)
	{
		write(1, &"0123456789"[n], 1);
		if (negativ == 1)
			return (2);
		return (1);
	}
	negativ += ft_print_nbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	return (negativ + 1);
}
