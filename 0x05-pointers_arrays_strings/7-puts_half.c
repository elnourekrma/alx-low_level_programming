#include "main.h"
#include <ctype.h>
/**
 *puts_half - function that changes intger's value to 98
 *Description: print reverse
 *@str: poiner to int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{int  i;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
