#include "main.h"
#include <stdio.h>
/**
 * *_strcmp - function that  compare two strings.
 *Description: recive frome funchtion a pointer and return nothing
 *@s1: poiner to string
 *@s2: no of numbers
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{int i;
for (i = 0; (s1[i] && s2[i]) && (s1[i] == s2[i]); i++)
;
return (*s1 - *s2);
}
