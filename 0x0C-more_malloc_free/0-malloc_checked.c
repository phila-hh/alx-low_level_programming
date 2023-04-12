#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memroy using malloc
 * @b: memory size
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
