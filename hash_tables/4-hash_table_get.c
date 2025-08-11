#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key
 * @ht: hash table to look into
 * @key: key to search for (must not be empty)
 *
 * Return: pointer to the value string, or NULL if not found/invalid input
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;
	const unsigned char *ukey;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ukey = (const unsigned char *)key;
	idx = key_index(ukey, ht->size);
	for (node = ht->array[idx]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
