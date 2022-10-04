#include "main.h"

/**
 * _isdigit - check if it is digit or not
 * @c: chara to test
 * Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
