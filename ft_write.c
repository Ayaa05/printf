#include "main.h"

/**
 * ft_write - Writes formatted data to the standard output (stdout)
 * @vlist: The variable argument list
 * @c: The format specifier
 *
 * Return: The number of characters written.
 */
int ft_write(va_list vlist, char c)
{
	int count;

	count = 0;
	if (c == '%')
		count += ft_putchar(c);
	else if (c == 'c')
		count += ft_putchar((int)va_arg(vlist, int));
	else if (c == 's')
		count += ft_putstr((char *)va_arg(vlist, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr((int)va_arg(vlist, int));
	else if (c == 'X' || c == 'x')
		count += ft_puthexa((unsigned int)va_arg(vlist, unsigned int), c);
	else if (c == 'u')
		count += ft_putnbrnonsign((unsigned int)va_arg(vlist, unsigned int));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putpointer((unsigned long)va_arg(vlist, unsigned long));
	}
	 else if (c == 'r')
		count += ft_putstr(va_arg(vlist, char *));
	else
	{
		ft_putchar('%');
		ft_putchar(c);
	}
	return (count);
}
