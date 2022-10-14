#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: code that print all possible cob of digit
 *Return: Always 0 (Success)
*/
int main(void)
{int n;
for (n = 0; n <= 9; n++)
{putchar(n + '0');
putchar(',');
 putchar(' ');
}
putchar('\n');
return (0);
}
