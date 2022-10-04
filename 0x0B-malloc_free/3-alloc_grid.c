#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocate a grid and frees space
 * @width: points to address to another pointer
 * @height: height of grid
 *
 * Return: returns space freed grid
 */

int **alloc_grid(int width, int height)
{
int **grid;
int a, b;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height);

if (grid == NULL)
{
return (NULL);
}

for (a = 0; a < height; a++)
{
grid[a] = malloc(sizeof(int) * width);
if (grid[a] == NULL)
{
for (a = a - 1; a >= 0; a--)
{
free(grid[a]);
}
free(grid);
return (NULL);
}
}
for (a = 0; b < width; b++)
grid[a][b] = 0;
return (grid);
}
