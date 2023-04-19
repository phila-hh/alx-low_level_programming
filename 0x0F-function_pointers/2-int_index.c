#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array input
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: index of the first element for which the cmp function does not
 * return 0, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		temp = cmp(*array++);
		if (temp)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
