#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block, using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of the new memory block
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	for (i = 0; i < new_size; i++)
	{
		if (i < old_size)
		{
			new_ptr[i] = 0;
		}
	}
	free(ptr);

	return (new_ptr);
}
