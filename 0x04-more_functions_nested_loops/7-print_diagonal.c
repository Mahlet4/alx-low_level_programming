#include "main.h"
/**
 * print_diagonal- prints diagonalline
 * @n: the number of times '\' is printed
 */
void print_diagonal(int n)
{
int i;
char line[i];
if (n == 0 && n < 0)
{
_putchar('\n');
}
else{
for (i = 0; i < n; i++)
{
int x;
while (line[i])
{
x++;
}
line[x] = " ";
int y = x - 1;
line[x - 1] = "92";
_putchar(line[x]);
_putchar('\n');
}
}
}
