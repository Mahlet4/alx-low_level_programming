#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to be cheked
 * Return: the length
 */
int _strlen(char *s)
{
int i, x = 0;
while (s[i] != '\0')
{
x++;
}
return (x);
}
