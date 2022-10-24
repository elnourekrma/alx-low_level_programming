#include "main.h"
#include <ctype.h>
/**
 *print_rev - function that changes intger's value to 98
 *Description: print reverse
 *@s: poiner to int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{int n, i = 0;
while (s[i] != '\0')
i++;
for (n = i - 1; n > 0; n--)
_putchar(s[n]);
_putchar('\n');
}
