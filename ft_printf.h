#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int ft_print_ptr(void *ptr);
int	ft_print_nbr(int n);
int	ft_print_usgnd_nbr(unsigned int nbr);
int	ft_print_hex(int nbr, char format);

#endif