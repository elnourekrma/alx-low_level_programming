#include "main.h"
#include <ctype.h>
/**
 *rev_string - function that changes intger's value to 98
 *Description: print reverse
 *@s: poiner to int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{int n, half, i = 0;
char tmp;
while (s[i] != '\0')
i++;
n = 0;
half = i / 2;
while (half--)
{
tmp = s[i - n - 1];
s[i - n - 1] = s[n];
s[n] = tmp;
n++;
}
}
