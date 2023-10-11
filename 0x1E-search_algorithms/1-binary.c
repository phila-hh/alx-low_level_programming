#include "search_algos.h"


/**
 * print_array - prints the ints in the array separated with comma
 * @array: pointer to the array to be printed
 * @start: the index to start printing from
 * @end: the index to end printing on
 *
 * Return: void
 */

void print_array(int *array, size_t start, size_t end)
{
        size_t idx;

        printf("Searching in array: ");
        for (idx = start; idx <= end; idx++)
        {
                if (idx != start)
                {
                        printf(", ");
                }
                printf("%d", array[idx]);
        }
        print("\n");
}


/**
 * binary_search - searches for a value in a sorted array of integers
 *		   using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise
 *         -1 if value is not present, or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, start, end;

	idx = 0;
	start = 0;
	end = size - 1;
	if (array != NULL)
	{
		while (start <= end)
		{
			print_array(array, start, end);
			idx = (start + end) / 2;

			if (value > array[idx])
			{
				start = idx + 1;
			}
			else if (value < array[idx])
			{
				end = idx - 1;
			}
			else
			{
				return (idx);
			}
		}
	}

	return (-1);
}
