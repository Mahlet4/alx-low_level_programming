#include "main.h"
/**
* is_prime_number- returns 1 is a number is a prime number
* @n: the number to be checked
* Return: 1 if the number is prime number, 0 otherwise
*/
int is_prime_number(int n)
{
int count = 0;
int x = 1;
return (_count(n, count, x);
}
/**
* _count- checks if a number is prime numbr or not
* @n: the number to be checked
* @count: checks if a number is prime or not
* @x: counts if a number is only divisible by 1 and itself
*/
int _count(int n, int count, int x)
{
if (x <= n)
{
if (n % x == 0)
{
count++;
if (count == 2 && x == n)
{
return (1);
}
else if (count > 2)
{
return (0);
}
}
}
return (_count(n, count, x + 1);
}
