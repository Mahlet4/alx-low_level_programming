#include "main.h"
/**
 * _sqrt - calculates the square root of a number
 * @num: the number to find the square root of
 * @y: number to test
 * Return: returns the square root of a number
 */
int _sqrt(int num, int y)
{
if (y * y == num)
{
return (y);
}
if (y == num)
{
return (-1);
}
return (_sqrt(num, y + 1));
}
/**
 * _sqrt_recursion- returns the square root of a number
 * @n: the number to calculate the square root of
 * Return: the final answer
 */
int _sqrt_recursion(int n)
{
int y = 0;
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (_sqrt(n, y));
}
