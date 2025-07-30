#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns number of elements in a doubly-linked list
 * @i: the iterator pointer points to a dlistint_t
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *i)
{
	int cnt = 0;

	while (i != NULL)
	{
		i = i->next;
		cnt++;
	}
	return (cnt);
}
