#include "main.h"
#include <ctype.h>
/**
 * print_diagonal - function that print a digonal line
 *Description: recive frome funchtion _putchar.c The character to print
   *Decription: function that checks is c is lowercase.
   *@n: length of the line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{int i = 0, k;
while (i < n && n > 0)
{
k = 0;
while (k <= i)
{
_putchar(' ');
k++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if (i <= 0)
_putchar('\n');
}
