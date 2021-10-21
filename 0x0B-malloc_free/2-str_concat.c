#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat: concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Retrun: the concatenated string
 *         NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i, j;
char *string;
if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
while (*s1 != '\0')
{
len1++;
}
while (*s2 != '\0')
{
len2++;
}
string = malloc(len1 + len2 +1);
i = 0;
while (i < len1)
{
string[i] = s1[i];
i++;
}
j = 0;
while (i < len1 + len2)
{
string[i] = s2[j];
i++;
j++;
}
string[i] = '\0';
return (string);
}
