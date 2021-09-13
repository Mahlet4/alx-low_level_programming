#include "main.h"
/**
 * print_triangle-prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int i, x;
if (size > 0)
{
for (x = 1; x <= size; x++)
{
int y = x, z = 1;
while (size - y != 0)
{
_putchar(' ');
y++;
}
while (z <= x)
{
_putchar('#');
z++;
}
_putchar('\n');
}
}
_putchar('\n');
}
