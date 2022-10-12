#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: number of arguments
 * @argv: argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < bytes; n++)
	{
		printf("%02hhx", *((char *)main + n));
		if (n < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
