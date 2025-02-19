/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:33:39 by anakin            #+#    #+#             */
/*   Updated: 2025/02/17 22:58:57 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_flags
{
	int	minus_flag;
	int	plus_flag;
	int	number_flag;
	int	hash_flag;
	int	dot_flag;
	int	zero_flag;
	int	space_flag;
	int	data_tpye;
	int	depth;
}	t_flags;

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int nbr);
int	ft_puthex(int nbr, char format);
int	ft_printf(const char *format, ...);

#endif