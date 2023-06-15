#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) a dlistint_t linked list
 * @head: pointer to the head of a dlistint_t list
 *
 * Return: sum of all the data in list,
 * else 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum;

	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
