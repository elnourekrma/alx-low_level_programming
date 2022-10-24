#include "main.h"
#include <ctype.h>
/**
 *_puts - function that changes intger's value to 98
 *Description: recive frome funchtion a pointer and return nothing
 *@str: poiner to int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{int i = 0;
while (str[i] != '\0')
{_putchar(str[i]);
i++;
}
_putchar('\n');
}
