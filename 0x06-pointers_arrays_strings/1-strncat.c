#include "main.h"

/**
 * _strncat - concatenates two strings by using n bytes
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: number of bytes to be concatenated
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	for (i = 0; dest[i]; i++)
	{
		len++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
