#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 *	diagonals of a square matrix of integers.
 * @a: pointer to matrix of integers
 * @size: matrix size
 */

void print_diagsums(int *a, int size);
{
	int ind, sum1 = 0, sum2 = 0;

	for (ind = 0; ind < size; ind++)
	{
		sum1 += a[ind];
		a += size;
	}

	a -= size;

	for (ind = 0; ind < size; ind++)
	{
		sum2 += a[ind];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
