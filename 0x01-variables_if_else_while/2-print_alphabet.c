#include <stdio.h>
/**
 * main - print alphabets in lowercase followed by new line
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	while (alpha = 'a' && alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
