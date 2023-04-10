#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters, and initializes
 * it with a specific character
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: NULL if if size is 0, or if it fails,
 * else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
