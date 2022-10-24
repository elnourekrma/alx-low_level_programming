#include "main.h"
#include <stdio.h>
/**
 *print_array - function that changes intger's value to 98
 *Description: recive frome funchtion a pointer and return nothing
 *@a: poiner to int
 *@n: no of numbers
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{int i = 0;
for (n--; n >= 0; n--, i++)
{printf("%d", a[i]);
if (n > 0)
printf(", ");
}
printf("\n");
}
