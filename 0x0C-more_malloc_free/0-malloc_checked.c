#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - it allocates memory
 * @b: memory to allocate
 *
 * Return: returns memory to allocated memory or if error,
 *	process termination
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
