/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:15:11 by anakin            #+#    #+#             */
/*   Updated: 2025/02/24 21:51:48 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_base(unsigned int nbr, char *base)
{
	int	result;

	result = 0;
	if (nbr >= 16)
		result += ft_hex_base(nbr / 16, base);
	write(1, &base[nbr % 16], 1);
	return (result + 1);
}

int	ft_puthex(int nbr, char format, t_flags data)
{
	unsigned int	cpy_nbr;
	int				count;

	count = 0;
	if (data.hash && format == 'x')
		count = write(1, "0x", 2);
	else if (data.hash)
		count = write(1, "0X", 2);
	cpy_nbr = (unsigned int)nbr;
	if (format == 'x')
		return (ft_hex_base(cpy_nbr, "0123456789abcdef") + count);
	else
		return (ft_hex_base(cpy_nbr, "0123456789ABCDEF") + count);
}
