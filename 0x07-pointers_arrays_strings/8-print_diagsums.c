#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integers
 * @a: array of integers
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0, j = 1; i < size; i++, j++)
	{
		sum1 += *(a + ((size + 1) * i));
		sum2 += *(a + ((size - 1) * j));
	}
	printf("%d, %d\n", sum1, sum2);
}
