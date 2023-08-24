#include "main.h"
/**
 * ft_putchar - Writes a single character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, returns 1. On error, -1 is returned.
 */
int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}
/**
 * ft_putstr - Writes a string to the standard output.
 * @s: The string to be written.
 *
 * Return: The total count of characters written.
 */

int ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}

/**
 * ft_putnbr - Writes an integer to the standard output.
 * @n: The integer to be written.
 *
 * Return: The total count of characters written.
 */
int ft_putnbr(int n)
{
	long	nombre;
	int		count;

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
