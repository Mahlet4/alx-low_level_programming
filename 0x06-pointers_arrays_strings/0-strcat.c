#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: first string
*@src: second string 
*Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int leng = 0,i;
while (dest[leng] != '\0')
{
leng++;
}
for (i = 0; src[i]; i++)
{
dest[leng] = src[i];
leng++;
}
return (dest);
}

