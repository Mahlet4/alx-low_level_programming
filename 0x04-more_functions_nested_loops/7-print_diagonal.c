#include "main.h"
/**
 * print_diagonal- prints diagonalline
 * @n: the number of times '\' is printed
 */
void print_diagonal(int n)
{
int i;
if (n == 0 && n < 0)
{
_putchar('\n');
}
else{
for (i = 0; i < n; i++)
{
char line[i];
int x = 0;
while (line[i])
{
x++;
}
line[x - 1] = "92";
while (x >= 0)
{
line[x] = " ";
x--;
}
_putchar(line[x]);
_putchar('\n');
}
}
}
