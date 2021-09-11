#include "main.h"
/**
 * print_line- prints lines
 * @n: the number of times '_' is printed
 */
void print_line(int n)
{
if (n > 0)
{
int x = 0;
while (x <= n)
{
_putchar('_');
x++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
