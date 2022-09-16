#include "main.h"

/**
 * _isdigit - checks for digit or not
 * @c: character to be tested
 * Return: 1 if it is or 0 if not
 */

int _isdigit(int c)
{
	if (( c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
