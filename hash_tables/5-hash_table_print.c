#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table ad dictionary
 * @ht: the hash table
 *
 * Order: iterate array index 0..size-1,
 * and within each bucket follow the list.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /*control , prints everytime except the first item*/

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/*print all the nodes at the same index*/
		while (node != NULL)
		{
			if (!first)
				printf(",");
			printf("'%s' : '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
