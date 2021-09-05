#include "main.h"
/**
 * jack_bauer(void)
 */
void jack_bauer(void)
{
int n,x;
for (n = 0; n <= 2; n++)
{
int y,z;
for (x=0; x <= 10; x++)
{
if (x == 10)
{
_putchar(n + '0');
_putchar(0 + '0');
}
else
{
_putchar(n + '0');
_putchar(x + '0');
}
_putchar(':');
for (y = 0; y <= 5; y++)
{
for (z = 0; z <= 10; z++)
{
if (z == 10)
{
_putchar(y + '0');
_putchar(0 + '0');
}
else
{
_putchar(y + '0');
_putchar(z + '0');
}
}
}
}
_putchar('\n');
}
}
