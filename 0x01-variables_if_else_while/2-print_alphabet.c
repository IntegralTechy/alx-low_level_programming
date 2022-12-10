#include <stdio.h>
/**
 * main - print alphabets in lowercase followed by new line
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
