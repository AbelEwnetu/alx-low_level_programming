#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *	to make a change
 * @argc: length of argv
 * @argv: number of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int placement, sumtot, change, ex;
	int coins[] = {25, 10, 5, 2, 1};

	placement = sumtot = change = ex = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sumtot = atoi(argv[1]);

	if (sumtot <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[placement] != '\0')
	{
		if (sumtot >= coins[placement])
		{
			ex = (sumtot / coins[placement]);
			change += ex;
			sumtot -= coins[placement] * ex;
		}

		placement++;

	}

	printf("%d\n", change);
	return (0);
}
