#include "main.h"
/**
 * more_numbers- prints numbers
 */
void more_numbers(void)
{
int n, x;
for (n = 0; n <= 14; n++)
{
for (x = 0; x <= 14; x++){
if (x > 9)
{
_putchar(1 + '0');
}
_putchar(x + '0');
}
}
_putchar('\n');
}
 
