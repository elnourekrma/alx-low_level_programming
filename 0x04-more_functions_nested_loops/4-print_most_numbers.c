#include "main.h"
#include <ctype.h>
/**
 * print_most_numbers - function that print numbers 0-9 except for 2,4
 *Description: recive frome funchtion _putchar.c The character to print
   *Decription: function that checks is c is lowercase.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
_putchar(i + '0');
}
_putchar('\n');
}
