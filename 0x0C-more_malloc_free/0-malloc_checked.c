#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - Allocates memory
 * @c: the size to allocate
 * Return: p
 */
void *malloc_checked(undigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
