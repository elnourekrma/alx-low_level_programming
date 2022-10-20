#include "main.h"
#include <ctype.h>
/**
 * print_numbers - function that print numbers 0-9
 *Description: recive frome funchtion _putchar.c The character to print
   *Decription: function that checks is c is lowercase.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
