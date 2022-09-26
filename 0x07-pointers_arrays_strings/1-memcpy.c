#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to used for copy
 *
 * Return: returns pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
