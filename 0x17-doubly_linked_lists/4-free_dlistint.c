#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of a dlistint_t list to be freed
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node, *next_node;

	if (head != NULL)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node != NULL)
		{
			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}

		free(actual_node);
	}
}
