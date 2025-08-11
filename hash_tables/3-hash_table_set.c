#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Add or update a key-value in a hash table
 * @ht: pointer to the hash table
 * @key: key string (must not be empty)
 * @value: value string (duplicate; maybe be empty but not NULL)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *curr;
	char *dup_key, *dup_value;
	const unsigned char *ukey;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	ukey = (const unsigned char *)key;
	idx = key_index(ukey, ht->size);
	/*if key already exist: same key*/
	/*update the value*/
	for (curr = ht->array[idx]; curr; curr = curr->next)
	{
		if (strcmp(curr->key, key) == 0)
		{
			char *new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(curr->value);
			curr->value = new_value;
			return (1);
		}
	}
	/*if key does not exist: collision or the bucket is empty*/
	/*make a new node insert at the beginning*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	dup_key = strdup(key);
	if (dup_key == NULL)
	{
		free(node);
		return (0);
	}
	dup_value = strdup(value);
	if (dup_value == NULL)
	{
		free(node);
		free(dup_key);
		return (0);
	}
	node->key = dup_key;
	node->value = dup_value;
	/*insert at beginning of the list*/
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
