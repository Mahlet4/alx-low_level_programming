#include "main.h"
/**
 * print_last_digit- prints the last digit.
 * @n: The integer
 * Return: the last digit.
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
_putchar(last_digit + 'n');
return (n%10);
}
