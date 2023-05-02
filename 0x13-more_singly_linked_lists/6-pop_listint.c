#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: a pointer to address of the head of a listint_t list
 *
 * Return: the head nodes data (n), or 0 if the head node is NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
