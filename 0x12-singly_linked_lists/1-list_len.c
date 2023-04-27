#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list input of type list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
