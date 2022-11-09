#include <stdio.h>
#include <stdlib.h>
/**
 *main - starting point of the program
 * Description: function that should return the number of arrguments passed
 *@argc: count of arguments
 *@argv: array of arguments
 * Return: 0 at success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{int i, m, sum = 0;
for (i = 1; i < argc; i++)
{
for (m = 0; argv[i][m]; m++)
{
if (argv[i][m] < '0' || argv[i][m] < '9')
{
sum += atoi(argv[i]);
}
}
printf("Errore\n");
return (1);
}
printf("%d\n", sum);
return (0);
}
