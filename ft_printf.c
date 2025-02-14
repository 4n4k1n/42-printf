/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:00:20 by anakin            #+#    #+#             */
/*   Updated: 2025/02/14 21:54:37 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>

int	print_formats(const char *format, va_list *args)
{
	if (*format == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (*format == 's')
		return (ft_print_str(va_arg(*args, char *)));
	else if (*format == 'p')
		return (ft_print_ptr(va_arg(*args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	else if (*format == 'u')
		return (ft_print_usgnd_nbr(va_arg(*args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_print_hex(va_arg(*args, int), *format));
	else if (*format == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int count;

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
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
int main(void)
{
	int nbr = 42;
	
	ft_printf("%p\n", &nbr);
	return (0);
}
