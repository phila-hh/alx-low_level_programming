#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: char array input
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][0] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
