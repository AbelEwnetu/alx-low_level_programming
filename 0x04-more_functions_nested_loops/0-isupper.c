#include "main.h"

/**
 * _isupper - check if character is uppercase or not
 * @c: character to be tested
 * Return: 1 if it is, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
