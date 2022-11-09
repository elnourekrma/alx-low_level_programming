#include <stdio.h>
#include <stdlib.h>
/**
 *main - starting point of the program
 * Description: function that should return the number of arrguments passed
 *@argc: count of arguments
 *@argv: array of arguments
 * Return: 1 at success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{int n, m, mt;
if (argc != 3)
{
printf("Errore\n");
return (1);
}
else
{
n = atoi(argv[1]);
m = atoi(argv[2]);
mt = n *m;
printf("%d\n", mt);
return (0);
}
}
