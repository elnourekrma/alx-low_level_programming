#include <stdio.h>
/**
 *main - starting point of the program
 * Description: function that should return the number of arrguments passed
 *@argc: count of arguments
 *@argv: array of arguments
 * Return: 1 at success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
