#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash tables
 *
 * @size: the size of hash table
 * Return: a pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *new;

	new = malloc(sizeof(size));
	if (!new)
		return (NULL);

	return (new);
}
