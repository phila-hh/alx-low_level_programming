#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
