/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:43:36 by anakin            #+#    #+#             */
<<<<<<< HEAD:src/ft_putstr.c
/*   Updated: 2025/02/27 15:57:24 by anakin           ###   ########.fr       */
=======
/*   Updated: 2025/03/08 19:05:05 by apregitz         ###   ########.fr       */
>>>>>>> finish:ft_putstr.c
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	if (!s)
		return (ft_putstr("(null)"));
	count = -1;
	while (s[++count])
		ft_putchar(s[count]);
	return (count);
}
