#include "lists.h"

/**
 * dlistint_len - returns the number of element in a linked dlistint_t list
 * @h: pointer to the head of a linked dlistint_t list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node;
	size_t len;

	node = h;
	len = 0;
	while (node != NULL)
	{
		len++;
		node = node->next;
	}

	return (len);
}
