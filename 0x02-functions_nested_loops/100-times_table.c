#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x = 0, re, y;

	if (n < 0 || n > 15)
		return;

	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			re = x * y;
			if  (y == 0)
				_putchar('0' + re);
			else if (re < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + re);
			}
			else if (re < 100)
			{
				_putchar(' ');
				_putchar('0' + re / 10);
				_putchar('0' + re % 10);
			}
			else
			{
				_putchar('0' + re / 100);
				_putchar('0' + (re - 100) / 10);
				_putchar('0' + re % 10);
			}
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
