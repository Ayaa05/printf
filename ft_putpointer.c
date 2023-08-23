#include "ft_printf.h"

/**
 * ft_putpointer - Writes a pointer address to the standard output (stdout)
 * @nombre: The pointer address to be written
 *
 * Return: The number of characters written.
 */
int ft_putpointer(unsigned long nombre)
{
	int count;
	char *hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (nombre >= 16)
	{
		count += ft_putpointer(nombre / 16);
		count += ft_putpointer(nombre % 16);
	}
	else
		count += ft_putchar(hexa[nombre]);
	return (count);
}
