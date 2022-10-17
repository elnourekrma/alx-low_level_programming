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
{int n, m, k;
for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
for (k = 0; k <= 9; k++)
{
if (n < m && m < k)
{putchar(n + '0');
putchar(m + '0');
putchar(k + '0');
 if (n != 7 || (n == 7  && k != 9))
{putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
