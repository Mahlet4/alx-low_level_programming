#include "main.h"
/**
 * jack_bauer(void)
 */
void jack_bauer(void)
{
int n,x,y,z;
for (n = 0; n <= 2; n++)
{
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 5; y++)
{
for (z = 0; z <= 9; z++)
{
_putchar(n + '0');
_putchar(x + '0');
_putchar(':');
_putchar(y + '0');
_putchar(z + '0');
_putchar('\n');
}
}
}
}
}
