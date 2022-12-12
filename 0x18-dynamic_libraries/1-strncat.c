#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: parameter to compare index
 *
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
