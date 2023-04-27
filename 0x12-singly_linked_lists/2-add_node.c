#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of the first element
 * @str: string input for the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;
	char *dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	length = _strlen(dup);

	new->str = dup;
	new->len = length;
	new->next = *head;

	*head = new;

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
