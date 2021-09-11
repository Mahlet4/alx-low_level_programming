#include "main.h"
/**
 * more_numbers- prints numbers
 */
void more_numbers(void)
{
int n;
for (n = 0; n <= 14; n++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
int x = 1;
_putchar(x + '0');
}
_putchar(n + '0');
}
}
_putchar('\n');
}
