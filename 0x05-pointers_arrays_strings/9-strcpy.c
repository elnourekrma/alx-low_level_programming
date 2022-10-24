#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - function that changes intger's value to 98
 *Description: recive frome funchtion a pointer and return nothing
 *@dest: poiner to int
 *@src: no of numbers
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{int i = -1;
for (i++; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
