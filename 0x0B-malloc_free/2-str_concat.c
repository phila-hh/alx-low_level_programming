#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string,
 * else NULL if failure encountered
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2) + 1;
	ptr = malloc((len1 + len2) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

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
