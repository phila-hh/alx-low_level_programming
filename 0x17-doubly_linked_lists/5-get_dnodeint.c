#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * @index: index of the node starting from 0
 *
 * Return: address of the nth node,
 * else NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; node != NULL && i != index; i++)
	{
		node = node->next;
	}
	if (node && (i == index))
	{
		return (node);
	}

	return (NULL);
}
