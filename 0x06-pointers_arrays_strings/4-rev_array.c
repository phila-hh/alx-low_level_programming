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
	int temp;

	i = 0;
	temp = 0;

	n = n - 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
