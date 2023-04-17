#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: struct dog pointer for the newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);

	return (new);
}

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
