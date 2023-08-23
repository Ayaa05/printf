#include "main.h"

/**
 * ft_putnbrnonsign - Writes an unsigned integer to the standard output (stdout)
 * @nombre: The unsigned integer to be written
 *
 * Return: The number of characters written.
 */
int ft_putnbrnonsign(unsigned int nombre)
{
	int count;

	count = 0;
	if (nombre > 9)
	{
		count += ft_putnbr(nombre / 10);
		count += ft_putnbr(nombre % 10);
	}
	else
		count += ft_putchar(nombre + 48);
	return (count);
}

