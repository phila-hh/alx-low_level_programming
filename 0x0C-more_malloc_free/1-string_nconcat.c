#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes form s2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, len2;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = _strlen(s1);
	len2 = _strlen(s2);
	if (len2 < n)
	{
		n = len2;
	}

	str = malloc(sizeof(char) * (len + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';

	return (str);
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
