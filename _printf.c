#include "main.h"
#include <stddef.h>

/**
 * _printf - Prints formatted output to the standard output (stdout)
 * @format: The format string
 * @...: The variable arguments
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count;
	int i;
	va_list vlist;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);

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
