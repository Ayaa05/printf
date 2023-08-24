#include "main.h"

int ft_putchar(int c)
{
	return (write(1, &c, 1));
}

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

int	ft_putnbr(int n)
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
