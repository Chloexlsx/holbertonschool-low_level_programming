#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a
 *	node at a given position
 * @headptr: the head pointer points to a pointer to a dlistint_t
 * @idx: the index to delete the node
 *
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **headptr, unsigned int idx)
{
	dlistint_t *temp = *headptr;
	unsigned int i;

	if (*headptr == NULL)
		return (-1);
	if (idx == 0 && *headptr != NULL && (*headptr)->next == NULL)
	{
		free(*headptr), *headptr = NULL;
		return (1);
	}
	for (i = 0; temp != NULL; i++)
	{
		if (idx == i)
		{
			if (idx == 0)
			{
				*headptr = temp->next;
				(*headptr)->prev = NULL;
				free(temp);
				return (1);
			}
			else if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				return (1);
			}
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				return (1);
			}
		}
		temp = temp->next;
	}
	return (-1);
}
