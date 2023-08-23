#include "main.h"

int ft_write(va_list vlist, char c)
{
    int written_chars = 0;

    switch (c)
    {
        case '%':
            written_chars += ft_putchar('%');
            break;
        case 'c':
            written_chars += ft_putchar(va_arg(vlist, int));
            break;
        case 's':
            written_chars += ft_putstr(va_arg(vlist, const char *));
            break;
        case 'd':
        case 'i':
            written_chars += ft_putnbr(va_arg(vlist, int));
            break;
        case 'X':
        case 'x':
            written_chars += ft_puthexa(va_arg(vlist, unsigned int), c);
            break;
        case 'u':
            written_chars += ft_putnbrnonsign(va_arg(vlist, unsigned int));
            break;
        case 'p':
            written_chars += ft_putstr("0x");
            written_chars += ft_putpointer(va_arg(vlist, unsigned long));
            break;
        case 'r':
            written_chars += ft_putstr(va_arg(vlist, const char *));
            break;
        default:
            written_chars += ft_putchar('%');
            written_chars += ft_putchar(c);
    }

    return written_chars;
}

