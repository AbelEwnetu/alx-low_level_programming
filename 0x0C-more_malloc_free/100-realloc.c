#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _realloc - function that  reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes for the new memory block
 *
 * Return: on success returns pointer to the reallocated
 *	memory block, otherwise NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int n;

	if (ptr != NULL)
	clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (n = 0; n < (old_size || n < new_size); n++)
	{
		*(relloc + n) = clone[n];
	}
	free(ptr);
	return (relloc);
}
