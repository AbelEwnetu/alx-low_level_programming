#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be checked
 * @c: char to be located in the string
 *
 * Return: returns pointer to s with c or null if c not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
