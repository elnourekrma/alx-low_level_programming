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
{char c;
for (c= 'a';c<='z';c++)
    {putchar(c);
putchar('\n');
}
return (0);
}
