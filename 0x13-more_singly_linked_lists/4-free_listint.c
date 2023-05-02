#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of a listint_t list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
