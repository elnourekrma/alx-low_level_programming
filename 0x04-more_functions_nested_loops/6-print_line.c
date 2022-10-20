#include "main.h"
#include <ctype.h>
/**
 * print_line - function that print a line
 *Description: recive frome funchtion _putchar.c The character to print
   *Decription: function that checks is c is lowercase.
   *@n: length of the line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{int i;
for (i = 0; i <= n; i++)
{
if (i > 0)
_putchar('_');
}
_putchar('\n');
}
