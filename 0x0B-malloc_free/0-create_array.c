#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array to be initialized
 * @c: the character to initialize the array with
 * Return: NULL if size = 0 or the function fails, 
           a poiner to the array if otherwise
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
