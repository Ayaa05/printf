#include "main.h"

int ft_puthexa(unsigned	int nombre, char x)
{
	int count;
	char *hexa;

	count = 0;
	if (x == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	if (nombre >= 16)
	{
		count += ft_puthexa(nombre / 16, x);
		count += ft_puthexa(nombre % 16, x);
	}
	else
		count += ft_putchar(hexa[nombre]);
	return (count);
}
