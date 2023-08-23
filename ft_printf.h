#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putchar(int c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putnbrnonsign(unsigned int nombre);
int ft_puthexa(unsigned int nombre, char x);
int ft_putpointer(unsigned long nombre);
int ft_write(va_list vlist, char c);
int _printf(const char *str, ...);

#endif
