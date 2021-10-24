#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- frees a previously created function
 * @grid: the grid to be freed
 * @height: the height
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]); 
}
free(grid);
}
