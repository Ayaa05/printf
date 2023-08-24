#include "main.h"

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

int _printf(const char *format, ...)
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

