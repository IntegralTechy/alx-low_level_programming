#include <stdio.h>
/**
 * main - print out data type sizes in C
 *
 * Return: 0
 */
int main(void)
{
	char m;
	int n;
	long int b;
	long long int v;
	float c;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(m));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(v));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(c));
	return (0);
}
