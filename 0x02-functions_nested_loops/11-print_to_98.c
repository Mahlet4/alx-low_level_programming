#include "main.h"
/**
 * print_to_98- prints upto 98
 * @n: the first number to be printed 
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
{
continue;
}
printf(", ");
}
}
