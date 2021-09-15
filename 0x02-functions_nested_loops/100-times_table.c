#include "main.h"
/**
 * print_times_table- prints 'n' times table
 * @n: the number
 */
void print_times_table(int n)
{
if (n < 15 && n >= 0)
{
int i, x;
for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
if (i * x <= 9)
{
_putchar((i * x) + '0');
}
else if (i * x < 100)
{
_putchar((i * x / 10) % 10 + '0');
_putchar((i * x) % 10 + '0');
}
else
{
_putchar((i * x / 100) % 10 + '0');
_putchar((i * x / 10) % 10 + '0');
_putchar((i * x) % 10 + '0');
}
if (x == n)
{
continue;
}
if (i * x <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (i * x < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
