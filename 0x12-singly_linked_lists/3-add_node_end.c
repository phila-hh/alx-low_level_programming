#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first element of list_t list
 * @str: string input for the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *last;
	int length, i;
	char *dup;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(tail);
		return (NULL);
	}

	length = 0;
	for (i = 0; dup[i]; i++)
	{
		length++;
	}

	tail->str = dup;
	tail->len = length;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = tail;
	}
	return (tail);
}
