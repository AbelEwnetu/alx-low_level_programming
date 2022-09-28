#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - function that checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 *
 * Return: If the number is divisible returns 0 and 1 if not
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}