#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc grid- returns a pointer to a 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 * Return: Null on failure or if width or height is o or negative.
 */
int **alloc_grid(int width, int height)
{
int x, y, z, w;
int **a;
if (width <= 0 || height <= 0)
{
return (NULL);
}
a = malloc(sizeof(int *) * height);
if ( a == NULL)
{
free(a);
return(NULL);
}
for (x = 0; x < height; x++)
{
a[x] = malloc(sizeof(int *) * width);
if (a[x] == NULL)
{
for (y = x; y >= 0; y--)
{
free(a[x]);
return(NULL);
}
}
}
for (z = 0; z < height; z++)
{
for (w = 0; w < width; w++)
{
a[z]a[w] = 0;
}
}
return(a);
}
