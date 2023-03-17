#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int n = 97; n < 123; n++)
		putchar(n);
	for (int i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
