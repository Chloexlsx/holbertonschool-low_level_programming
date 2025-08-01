#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete__dnodeint_at_index - deletes a
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
	/*if there is only one left, and the index = 0, we do not want it to be handled as the beginning or the last case*/
	if (idx == 0 && *headptr != NULL && (*headptr)->next == NULL)
	{
		free(*headptr);
		*headptr = NULL;
		return (1);
	}
	for (i = 0; temp != NULL; i++)
	{
		if (idx == i)
		{	/*beginning*/
			if (idx == 0)
			{
				/*move head to where temp points at*/
				*headptr = temp->next;
				(*headptr)->prev = NULL;
				free(temp);
				return (1);
			}
			/*last*/
			else if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				return (1);
			}
			/*middle*/
			else
			{
				/**/
				/*points the ones before and after temp to each other*/
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
