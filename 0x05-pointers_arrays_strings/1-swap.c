#include "main.h"
#include <ctype.h>
/**
 *swap_int - function that changes intger's value to 98
 *Description: recive frome funchtion a pointer and return nothing
 *@a: poiner to int
 *@b:poniter to 2nd int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
