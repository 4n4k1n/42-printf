/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:48:56 by anakin            #+#    #+#             */
/*   Updated: 2025/02/27 15:57:29 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr < 10)
	{
		write(1, &"0123456789"[nbr], 1);
		return (1);
	}
	count += ft_putunbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
	return (count + 1);
}

// int main(void)
// {
// 	unsigned int nbr = 4294967295;
// 	ft_print_usgnd_nbr(nbr);
// 	write(1, "\n", 1);
// 	return (0);
// }
