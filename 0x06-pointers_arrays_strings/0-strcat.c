#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string 
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int n = 0, i;
while (dest[n])
{
n++;
}
for (i = 0; src[i] != 0; i++)
{
dest[n] = src[i];
n++;
}
dest[n] = '\0';
return (dest);
}
