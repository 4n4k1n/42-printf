/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:15:11 by anakin            #+#    #+#             */
/*   Updated: 2025/02/15 15:41:39 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_base(long long int nbr, char *base)
{
	int	negativ;

	negativ = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
		negativ = 1;
	}
	if (nbr >= 16)
		negativ += ft_hex_base(nbr / 16, base);
	write(1, &base[nbr % 16], 1);
	return (negativ + 1);
}

int	ft_puthex(int nbr, char format)
{
	if (format == 'x')
		return (ft_hex_base(nbr, "0123456789abcdef"));
	else
		return (ft_hex_base(nbr, "0123456789ABCDEF"));
}
