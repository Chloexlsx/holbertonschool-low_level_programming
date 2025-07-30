#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a doubly-linked list
 * @i: the iterator pointer points to a dlistint_t
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *i)
{
	int cnt = 0;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		cnt++;
	}
	return (cnt);
}
