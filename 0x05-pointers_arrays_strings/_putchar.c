#include <unistd.h>

/**
 * _putchar - writes char c to stdout.
 * @c: the character to print.
 *
 * Return: returns 1 on success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
