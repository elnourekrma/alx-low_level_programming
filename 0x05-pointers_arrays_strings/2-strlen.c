#include "main.h"
#include <ctype.h>
/**
 *_strlen - function that changes intger's value to 98
 *Description: recive frome funchtion a pointer and return nothing
 *@s: poiner to int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
