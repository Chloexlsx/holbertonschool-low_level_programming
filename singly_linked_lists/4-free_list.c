#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list- frees a list of nodes
 * @head: the pointer points to the head pointer to the first node
 *
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	temp = head;

		/*temp walk to the last node in the list*/
		/**
		* free() expects a pointer to the memory spaces,
		* and it will free the string/list that the pointer points to
		*/
	while (head != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
