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
{int n,m;
for (n = 0; n <= 9; n++)
{for (m = 0; m <= 9; m++)
{if ( n < m)
{putchar(n +'0');
putchar(m + '0');
if (n != 8 || (n == 8 && n !=9))
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
