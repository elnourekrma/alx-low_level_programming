#include "main.h"
/**
 * print_alphabet - writes string "_purchar"
 *Description: recive frome funchtion _putchar.c The character to print
 * function that pronts small aphabets
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
