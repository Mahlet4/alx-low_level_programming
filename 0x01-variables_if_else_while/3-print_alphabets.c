#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: always 0.
 */
int main(void)
{
char n,y;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (y = 'A'; y<= 'Z'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
