/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:00:20 by anakin            #+#    #+#             */
/*   Updated: 2025/02/15 16:12:28 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_formats(const char *format, va_list *args)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (*format == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (*format == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_puthex(va_arg(*args, int), *format));
	else if (*format == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += print_formats(format, &args);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int	nbr;
	int	count;

	nbr = 42;
	count = ft_printf(
		"pointer    = %p\n" \
		"int(d)     = %d\n" \
		"int(i)     = %i\n" \
		"char       = %c\n" \
		"str        = %s\n" \
		"str (null) = %s\n" \
		"hex(low)   = %x\n" \
		"hex(up)    = %X\n" \
		"unsinged   = %u\n" \
		"sign       = %%\n",
		&nbr, nbr, nbr, 'c', "test test", NULL, nbr, nbr, (unsigned int)nbr);
		ft_printf("count = %d\n", count);
	return (0);
}
