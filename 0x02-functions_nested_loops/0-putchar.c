#include "main.h"
/**
 * main - writes string "_purchar"
 * recive frome funchtion _putchar.c The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{char c, str[] = "_putchar";
int i = 0;
char n = '\n';
while (str[i] != '\0')
{
c = str[i];
_putchar(c);
i++;
}
_putchar(n);
return (0);
}
