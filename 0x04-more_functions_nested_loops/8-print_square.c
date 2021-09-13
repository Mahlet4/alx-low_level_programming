#include "main.h"
/**
 * print_square- prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
int i, x;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
if (i == size - 1)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
