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
int mul, num1, num2;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
