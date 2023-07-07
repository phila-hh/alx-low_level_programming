#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: the key to get the index of
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
