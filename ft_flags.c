/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:37:55 by anakin            #+#    #+#             */
/*   Updated: 2025/02/25 10:42:04 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prpare_flags(t_flags *data)
{
	data->plus = 0;
	data->minus = 0;
	data->zero = 0;
	data->hash = 0;
	data->space = 0;
	data->dot = 0;
	data->width = 0;
	data->type = 0;
}

int	ft_is_specifier(const char c)
{
	if (c == 'd' || c == 'i' || c == 'c' || c == 's' || c == 'u' \
	|| c == 'p' || c == 'x' || c == 'X')
		return (1);
	return (0);
}



int	ft_get_flags(t_flags *data, const char *s)
{
	int	i;

	i = 0;
	while (!ft_is_specifier(s[i]))
	{
		if (s[i] == '-')
			data->minus = 1;
		else if (s[i] == '+')
			data->plus = 1;
		else if (s[i] == '0')
			data->zero = 1;
		else if (s[i] == '#')
			data->hash = 1;
		else if (s[i] == ' ')
			data->space = 1;
		i++;
	}
	return (i);
}

// void ft_eliminate_flags(t_flags *data)
// {

// }
