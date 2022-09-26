#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be checked
 * @needle: substring to be located
 *
 * Return: returns a pointer to the located needle
 *	and null if not lacated.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if ([i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
