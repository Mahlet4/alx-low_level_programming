#include <stdio.h>
/**
 * main - combinations
 *
 *Return: 0.
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar((n %10) + '0');
if (on == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
