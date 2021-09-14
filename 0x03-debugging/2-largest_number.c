#include "main.h"
/**
 * largest_number - prints the largest number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: returns the largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else if (c >= a && c >= b)
{
largest = c;
}
return (largest);
}

