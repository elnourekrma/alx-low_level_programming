#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: code that print the alphabet using putchar
 *Return: Always 0 (Success)
*/
int main(void)
{char n;
char x = 'a';
for (n = '0'; n <= '9'; n++)
{putchar(n);
}
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
