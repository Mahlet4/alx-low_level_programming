#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints result of multiplication
 * @argc: the number of arguments
 * @argv: array of pointers to the arguments
 * Return: 1 if the program didn't receive any arguments
 */
int main(int argc, char *argv[])
{
int i, mul;
if (argc == 3)
{
mul = argv[1] * argv[2];
printf("%d\n", mul);
}
else
{
return (1);
}
}
