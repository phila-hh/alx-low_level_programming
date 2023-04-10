#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string input
 *
 * Return: NULL if str is NULL or if insufficient memory,
 * else pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i <= len; i++)
		{
			ptr[i] = str[i];
		}
	}

	return (ptr);
}

/**
 * _strlen - gets length of a string
 * @str: string input
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;
	int len;

	len = 0;
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	return (len);
}
