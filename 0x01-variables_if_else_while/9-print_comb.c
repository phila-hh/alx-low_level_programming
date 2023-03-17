#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
