#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 *
 * Return: the pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	/*pointer allocation*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	/*assign size to store input size*/
	table->size = size;
	/*allocate the array of pointers to nodes and initialise*/
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
