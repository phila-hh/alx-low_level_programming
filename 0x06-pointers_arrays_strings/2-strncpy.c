#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to be copied
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
