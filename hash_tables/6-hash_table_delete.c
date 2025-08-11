#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_bucket_list - free a linked list of hash nodes
 * @head: first node of the bucket list
 *
 * Return: void
 */
static void free_bucket_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * hash_table_delete - delete a hash table and free all memory
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		free_bucket_list(node);
	}
	free(ht->array);
	free(ht);
}
