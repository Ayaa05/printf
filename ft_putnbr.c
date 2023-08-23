#include "ft_printf.h"

/**
 * ft_putnbr - Writes an integer to the standard output (stdout)
 * @n: The integer to be written
 *
 * Return: The number of characters written.
 */
int ft_putnbr(int n)
{
	long nombre;
	int count;

	count = 0;
	nombre = n;
	if (nombre < 0)
	{
		count += ft_putchar('-');
		nombre *= -1;
	}
	if (nombre > 9)
	{
		count += ft_putnbr(nombre / 10);
		count += ft_putnbr(nombre % 10);
	}
	else
		count += ft_putchar(nombre + 48);
	return (count);
}
