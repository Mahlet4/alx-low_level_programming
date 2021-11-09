#include <stdio.h>
#include <stdlib.h>
/**
 * main- adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int  digit, i, sum = 0, x = 0;
for (i = 1; i < argc; i++)
{
for (digit = 0; argv[i][digit]; digit ++)
{
if (argv[i][digit] < '0' && argv[i][digit] > '9')
{
x++;
}
}
}
if (x == (argc - 1))
{
printf("0\n");
}
else if (x > 0 && x < (argc - 1))
{
printf("Error\n");
return (1);
}
else if (x == 0)
{
for (i = 1; i < argc; i++)
{
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
