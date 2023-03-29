#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to appended to
 * @src: string from which to append
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	for (i = 0; dest[i]; i++)
	{
		len++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
