#include <stdio.h>
/**
 *main - starting point of the program
 * Description: function that should return the number of arrguments passed
 *@argc: count of arguments
 *@argv: array of arguments
 * Return: 1 at success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
