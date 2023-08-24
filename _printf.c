#include "main.h"

/**
 * ft_write - Handles the formatting and writing of different specifiers.
 * @vlist: The variable argument list.
 * @c: The specifier character.
 *
 * Return: The count of characters written.
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
	return (count);
}
/**
 * _printf - Prints formatted output according to the format string.
 * @format: The format string.
 * @...: Variable number of arguments.
 *
 * Return: The total count of characters written.
 */
int printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	vlist;

	va_start(vlist, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
				count += ft_write(vlist, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		if (format[i])
			i++;
	}
	va_end(vlist);
	return (count);
}

