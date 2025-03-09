/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:42:49 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:09:26 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_ptr_rec(unsigned long int nbr)
{
	int	count;

	count = 0;
	if (nbr < 16)
	{
		ft_putchar("0123456789abcdef"[nbr]);
		return (1);
	}
	count += ft_put_ptr_rec(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
	return (count + 1);
}

int	ft_putptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("0x0"));
	return (ft_putstr("0x") + ft_put_ptr_rec((unsigned long int)ptr));
}

// #include <stdio.h>
// int main(void)
// {
// 	int nbr = 42;
// 	int *ptr = &nbr;
// 	printf("%p\n", ptr);
// 	return (0);
// }
