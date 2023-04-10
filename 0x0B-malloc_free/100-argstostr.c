#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: argument array pointer
 *
 * Return: string pointer or NULL if failure encountered
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; i < ac; i++)
	{
		_strcpy(ptr + j, av[i]);
		j += _strlen(av[i]);
		ptr[j++] = '\n';
	}
	ptr[j--] = '\0';

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

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: character pointer to dest
 * @src: character pointer to src
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
