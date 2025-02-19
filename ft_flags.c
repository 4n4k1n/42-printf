/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:37:55 by anakin            #+#    #+#             */
/*   Updated: 2025/02/17 23:05:48 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_prpare_flags(void)
{
	t_flags	data;

	data.data_tpye = 0;
	data.depth = 0;
	data.dot_flag = 0;
	data.hash_flag = 0;
	data.minus_flag = 0;
	data.number_flag = 0;
	data.plus_flag = 0;
	data.zero_flag = 0;
	return (data);
}

static int	ft_is_specifier(const char c)
{
	if (c == 'd' || c == 'i' || c == 'c' || c == 's' || c == 'u' \
	|| c == 'p' || c == 'x' || c == 'X')
		return (0);
	return (1);
}

void ft_check_flags(t_flags *data)
{

}

void	ft_get_flags(t_flags *data, const char *s)
{
	int	i;

	i = 0;
	while (ft_is_specifier(s[i]))
	{
		if (s[i] == '0')
			data->zero_flag = 1;
		else if (s[i] == '#')
			data->hash_flag = 1;
		else if (s[i] == '.')
			data->dot_flag = 1;
		else if (s[i] == ' ')
			data->space_flag = 1;
		else if (s[i] == '-')
			data->minus_flag = 1;
		else if (s[i] == '+')
			data->plus_flag = 1;
		i++;
	}
}
