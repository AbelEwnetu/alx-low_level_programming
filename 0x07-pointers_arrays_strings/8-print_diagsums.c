#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 *	diagonals of a square matrix of integers.
 * @a: pointer to matrix of integers
 * @size: matrix size
 */

void print_diagsums(int *a, int size);
{
	int i, j, k, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		x = x + *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		y = y + *(a + k);
	}
	printf("%i, %i\n", x, y);
}
