#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: If str1 < str2, returns negative number
 *         If str1 == str2, returns 0
 *         If str1 > str2, returns postive number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
