#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbrnonsign(unsigned int nombre);
int		ft_puthexa(unsigned	int nombre, char x);
int		_printf(const char *str, ...);

#endif
