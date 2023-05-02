#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of the head of a listint_t list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
