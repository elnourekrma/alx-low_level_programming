#include "main.h"
#include <ctype.h>
/**
 * print_sign- writes string "_purchar"
 *Description: recive frome funchtion _putchar.c The character to print
 *@n: is the intger
 *Decription: function that checks the sign of c
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
if (n == 0)
{_putchar('0');
return (0);
}
else if (n > 0)
{_putchar('+');
return (1);
}
else
{_putchar('-');
return (-1);
}
}
