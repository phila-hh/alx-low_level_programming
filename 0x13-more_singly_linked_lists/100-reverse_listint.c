#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the head of a listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *after;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	before = NULL;
	while ((*head)->next)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	(*head)->next = before;

	return (*head);
}
