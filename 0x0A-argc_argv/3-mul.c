#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, m, k;

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	k = n * m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", k);

	return (0);
}
