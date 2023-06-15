#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count;

	node = h;
	count = 0;
	while (node != NULL)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}

	return (count);
}
