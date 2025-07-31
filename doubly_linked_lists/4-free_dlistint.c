#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_dlistint - frees a dlinklist
 * @head: the head pointer points to a dlistint_t
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	/*return if the pointer to the head is NULL*/
	if (head == NULL)
		return;
	/*head walks to the last node*/
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	if (head->next == NULL)
	{
		free(head);
	}
}
