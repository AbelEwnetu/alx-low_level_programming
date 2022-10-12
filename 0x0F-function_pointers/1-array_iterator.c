#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 * @array: element of array
 * @size: array size
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
