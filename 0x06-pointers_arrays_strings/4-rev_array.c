#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers
 * @n: length of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int f, l;
	int x, y;

	x = 0;
	y = n - 1;
	for (i = 0; i <= (n / 2); i++)
	{
		f = a[x];
		l = a[y];
		a[x] = l;
		a[y] = f;
		x++;
		y--;
	}
}
