#include "main.h"
#include <ctype.h>
/**
 * _isdigit - to chack if a digit
 *Description: recive frome funchtion _putchar.c The character to print
 *@c: is the character
 *Decription: function that checks is c is lowercase.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{int i;
i = isdigit(c);
if (i > 1)
return (1);
return (0);
}
