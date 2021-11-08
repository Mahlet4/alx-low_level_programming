#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the number of arguments passed to it.
 * @argc: the number of arguments.
 * @argv: an array of pointers to the arguments.
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
