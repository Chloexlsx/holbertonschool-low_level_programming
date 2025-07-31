#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node of a node
 * @head: the head pointer points to a dlistint_t
 * @index: the index of the node to be returned
 *
 * Return: a pointer to a node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	/*temp walks to the index*/
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
