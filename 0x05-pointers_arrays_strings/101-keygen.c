#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates password.
 *
 * Return: returns generated password
 */

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x = x + c;
		putchar(c);
	}
	putchar(2772 - x);

	return (0);
}
