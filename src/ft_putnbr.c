/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:41:51 by anakin            #+#    #+#             */
/*   Updated: 2025/02/14 21:40:52 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	negativ;

	negativ = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
		negativ = 1;
	}
	if (n < 10)
	{
		ft_putchar("0123456789"[n]);
		if (negativ == 1)
			return (2);
		return (1);
	}
	negativ += ft_putnbr(n / 10);
	ft_putchar("0123456789"[n % 10]);
	return (negativ + 1);
}
