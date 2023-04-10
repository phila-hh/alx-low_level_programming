#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string input
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int len, i, j;
	int start, count, word_len;
	char **words;

	if (*str == '\0' || str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_len = 0;
	count = 0;
	start = -1;
	for (i = 0; i <= len; i++)
	{
		if (str[i] == '\0' || str[i] == ' ')
		{
			if (start != -1)
			{
				word_len = i - start;
				words[count] = malloc((word_len + 1) * sizeof(char));
				if (words[count] == NULL)
				{
					for (j = 0; j < count; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				_strncpy(words[count], str + start, word_len);
				words[count][word_len] = '\0';
				count++;
				start = -1;
			}
		}
		else
		{
			if (start == -1)
			{
				start = i;
			}
		}
	}
	words[count] = NULL;
	return (words);
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
		if (src[i] == '\n')
		{
			i++;
			while (dest[i])
			{
				dest[i] = '\0';
				i++;
			}
			break;
		}
	}

	return (dest);
}
