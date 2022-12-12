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
	int ind;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ind = 0;

		if (haystack[ind] == needle[ind])
		{
			do {
				if (needle[ind + 1] == '\0')
					return (haystack);

				ind++;

			} while (haystack[ind] == needle[ind]);
		}

			haystack++;
	}

	return ('\0');
}
