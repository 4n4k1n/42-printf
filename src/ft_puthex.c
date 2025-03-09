/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:15:11 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:08:13 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_hex_base(unsigned int nbr, char *base)
{
	int	result;

	result = 0;
	if (nbr >= 16)
		result += ft_hex_base(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
	return (result + 1);
}

int	ft_puthex(int nbr, char format)
{
	unsigned int	cpy_nbr;

	cpy_nbr = (unsigned int)nbr;
	if (format == 'x')
		return (ft_hex_base(cpy_nbr, "0123456789abcdef"));
	else
		return (ft_hex_base(cpy_nbr, "0123456789ABCDEF"));
}
