#include "main.h"

/**
 * ft_putstr - Writes a string to the standard output (stdout)
 * @s: The string to be written
 *
 * Return: The number of characters written.
 */
int ft_putstr(char *s)
{
	int i;
	int count;

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

