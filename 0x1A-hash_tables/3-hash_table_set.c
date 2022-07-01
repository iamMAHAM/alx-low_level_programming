#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: the hash table
 * @key: the key
 * @value: tha value to add
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *tmp;
	char *tmp_value;

	if (!ht || !key || !value || !strlen(key) || !ht->array
			|| !ht->size)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp_value = strdup(value);
			if (!tmp_value)
				return (0);

			free(tmp->value);
			tmp->value = tmp_value;
			return (1);
		}
	}

	tmp = new_node_create(key, value);
	if (!tmp)
		return (0);

	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}

/**
 * new_node_create - creates a new node with key and its value
 *
 * @key: the key
 * @value: the value
 * Return: hash_node_t*
 */
hash_node_t *new_node_create(const char *key, const char *value)
{
	char *tmp_key, *tmp_value;
	hash_node_t *new_node;

	tmp_key = strdup(key);
	if (!tmp_key)
		return (NULL);

	tmp_value = strdup(value);
	if (!tmp_value)
	{
		free(tmp_key);
		return (NULL);
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
	{
		free(tmp_key), free(tmp_value);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->key = tmp_key;
	new_node->value = tmp_value;
	return (new_node);
}

