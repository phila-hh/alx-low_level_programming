#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: a pointer to the address of the head of a listint_t list
 * @index: index at which the node to be deleted is
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp_2;
	unsigned int i;

	tmp = *head;
	if (tmp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	i = 0;
	while (i < (index - 1))
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		i++;
	}
	tmp_2 = tmp->next;
	tmp->next = tmp_2->next;
	free(tmp_2);
	return (1);
}
