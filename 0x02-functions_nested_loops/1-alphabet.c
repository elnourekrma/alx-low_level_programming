#include "main.h"
/**
 * main - writes string "_purchar"
 * recive frome funchtion _putchar.c The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void main(void)
{char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
