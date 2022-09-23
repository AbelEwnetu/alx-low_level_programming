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
	int a;

	srand(time(0));
	while (a <= 2645)
	{
		c = rand() % 128;
		a = a + c;
		putchar(c);
	}
	putchar(2772 - a);

	return (0);
}
