#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a give position
 * @h: pointer to the address of the head of a dlistint_t list
 * @idx: position at which to insert the new node
 * @n: integer inpur of the new node to be inserted
 *
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	temp = *h;
	for (i = 0; (i != idx - 1) && (temp != NULL); i++)
	{
		*h = (*h)->next;
	}

	if ((i == idx - 1) && (temp != NULL))
	{
		new_node->prev = temp;
		new_node->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
