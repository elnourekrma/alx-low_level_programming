#include "main.h"
#include <ctype.h>
/**
 * _islower - writes string "_purchar"
 *Description: recive frome funchtion _putchar.c The character to print
 *@c: is the character
 *Decription: function that checks is c is lowercase.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{int i = 'a';
for (i = 'a'; i <= 'z'; i++)
{/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
