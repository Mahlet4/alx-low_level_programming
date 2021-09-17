#include "main.h"
int _count(int num, int count, int x);
/**
* is_prime_number- returns 1 is a number is a prime number
* @n: the number to be checked
* @num: the number to check
* @count: checks if a number is prime or not
* @x: counts
* Return: 1 if the number is prime number, 0 otherwise
*/
int is_prime_number(int n)
{
int count = 0;
int x = 1;
return (_count(n, count, x));
}
/**
* _count- checks if a number is prime numbr or not
* @num: the number to be checked
* @count: checks if a number is prime or not
* @x: counts if a number is only divisible by 1 and itself
* Return: 1 if prime, 0 otherwise
*/
int _count(int num, int count, int x)
{
if (num == 1 || num < 0)
{
return (0);
}
if (x <= num)
{
if (num % x == 0)
{
count++;
if (count == 2 && x == num)
{
return (1);
}
else if (count > 2)
{
return (0);
}
}
}
return (_count(num, count, x + 1));
}
