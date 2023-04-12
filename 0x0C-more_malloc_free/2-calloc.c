#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array size
 * @size: size for each member of the array
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;
	int *r;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
	{
		r = malloc(size);
		if (r == NULL)
		{
			return (NULL);
		}
		ptr[i] = *r;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
