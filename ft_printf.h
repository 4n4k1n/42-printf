/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:33:39 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:05:10 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flags
{
	int		plus;
	int		minus;
	int		zero;
	int		hash;
	int		space;
	char	type;
}			t_flags;

int			*get_error(void);
void		set_error(int new_status);

int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putptr(void *ptr);
int			ft_putnbr(int n);
int			ft_putunbr(unsigned int nbr);
int			ft_puthex(int nbr, char format);
int			ft_printf(const char *format, ...);

#endif