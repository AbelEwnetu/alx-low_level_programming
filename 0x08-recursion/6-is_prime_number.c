#include "main.h"

/**
 * is_prime_number - if n is prime returns 1
 * @n: The number to be checked
 *
 * Return: If the number prime returns 1 and 0 if not
 */

int is_prime_number(int n)
{
	int first = n / 2

	if (n < 1)
		return (0);
	return (is_prime(n, first));
}
/**
 * is_prime - if n is prime returns 1
 * @n: The number to be checked
 * @first: number to start checking
 *
 * Return: If the number prime returns 1 and 0 if not
 */

int is_prime(int n, int first)
{
	if (start <= 1)
		return (1);
	else if (n % first == 0)
		return (0);
	return (is_prime(n, first - 1));
}
