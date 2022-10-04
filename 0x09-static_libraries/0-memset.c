#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory block to be filled.
 * @b: character to fill the memory block
 * @n: number of bytes to be filled
 *
 * Return: returns pointer to the filled memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
