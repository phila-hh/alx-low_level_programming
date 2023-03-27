#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character pointer
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i])
	{
		len++;
		i++;
	}

	return (len);
}
