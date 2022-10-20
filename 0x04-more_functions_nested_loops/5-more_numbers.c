#include "main.h"
#include <ctype.h>
/**
 * more_numbers - function that print numbers 0-14 ten times
 *Description: recive frome funchtion _putchar.c The character to print
   *Decription: function that checks is c is lowercase.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{int k;
char i, c;
for (k = 0; k < 10; k++)
{
for (i = 0; i <= 14; i++)
{
c = i;
if (i > 9)
{
_putchar('1');
 c = i % 10;
} 
_putchar(c + '0');
}
_putchar('\n');
}
}
