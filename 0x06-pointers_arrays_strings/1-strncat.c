#include "main.h"
#include <stdio.h>
/**
 * *_strncat - function that  concatenates two strings.
 *Description: recive frome funchtion a pointer and return nothing
 *@dest: poiner to int
 *@src: no of numbers
 *@n: the limit of chars would be copied from src
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{int i = 0, k = 0;
while (dest[i++])
k++;
for (i = 0; src[i] && i < n; i++)
{
dest[k++] = src[i];
}
return (dest);
}
