#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: returns 0, if big-endian
 *	returns 1, if little-endian
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
