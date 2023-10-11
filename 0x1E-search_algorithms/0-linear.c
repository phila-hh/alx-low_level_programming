#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *		   using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise
 *	   -1 if value is not present, or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	idx = 0;
	if (array != NULL)
	{
		while (idx < size)
		{
			printf("Value checked array[%lu] = [%d]\n",
					idx, array[idx]);
			if (array[idx] == value)
			{
				return (idx);
			}
			idx++;
		}
	}

	return (-1);
}
