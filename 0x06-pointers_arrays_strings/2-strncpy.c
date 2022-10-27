#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that  concatenates two strings.
 *Description: recive frome funchtion a pointer and return nothing
 *@dest: poiner to int
 *@src: no of numbers
 *@n: the limit of chars would be copied from src
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{int i = 0;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
