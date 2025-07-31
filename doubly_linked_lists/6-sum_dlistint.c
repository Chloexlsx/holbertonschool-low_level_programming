#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * sum_dlistint - returns the sum of data in a list
 * @head: the head pointer points to a dlistint_t
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	/*temp walks to the index*/
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
