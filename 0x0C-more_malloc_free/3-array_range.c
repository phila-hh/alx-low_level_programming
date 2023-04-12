#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first number
 * @max: second number
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
