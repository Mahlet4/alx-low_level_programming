#include <stdio.h>
#include <stdlib.h>
/**
 * main- prnits all the arguments it receives
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
int i;
for (i = 0; i < argv; i++)
{
printf("%s\n", argv[i]);
}
return(0);
}
