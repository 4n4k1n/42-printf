/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:33:39 by anakin            #+#    #+#             */
/*   Updated: 2025/02/25 10:42:59 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_flags
{
	int		plus;
	int		minus;
	int		zero;
	int		hash;
	int		space;
	int		dot;
	int		width;
	char	type;
}	t_flags;

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int nbr);
int		ft_puthex(int nbr, char format, t_flags data);
int		ft_printf(const char *format, ...);
void	ft_prpare_flags(t_flags *data);
int		ft_get_flags(t_flags *data, const char *s);
int		ft_is_specifier(const char c);

#endif