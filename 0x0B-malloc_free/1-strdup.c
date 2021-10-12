#include "main.h"
#include <stdlib.h>
/**
 * _strdup- returns a porinter to a memory
 *          which contains a copy of the
 *          string given as a parameter
 * @str: the string to be copied
 * Return:NULL if str = NULL or if memory is insufficient
 *       a pointer to the string if otherwise
 */
char *_strdup(char *str)
{
char *string;
int x = 0;
int i;
if (str == NULL)
{
return (NULL);
}
while (str[x] != '\0')
{
x++;
}
string = malloc(sizeof(char) * (x + 1));
if (string == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
string[i] = str[i];
}
string[x] = '\0';
return (string);
}
