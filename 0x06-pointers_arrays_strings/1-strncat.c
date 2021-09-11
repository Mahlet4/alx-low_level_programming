#include "main.h"
/**
 * _srncat- concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: the integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len = 0, i = 0;
while (dest[len] != '\0')
{
len++;
}
while (i < n && src[i])
{
dest[len] = src[i];
len++;
i++;
}
dest[len + n + 1] = '\0';
return (dest);
}
