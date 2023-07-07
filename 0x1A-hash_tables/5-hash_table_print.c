#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int  idx;
	hash_node_t *node;
	char *comma = "";

	idx = 0;
	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		node = ((ht->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		idx++;
	}
	puts("}");
}
