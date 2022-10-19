#include "main.h"
#include <ctype.h>
/**
 * _isalpha- writes string "_purchar"
 *Description: recive frome funchtion _putchar.c The character to print
 *@c: is the character
 *Decription: function that checks is c is alphabetic
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
