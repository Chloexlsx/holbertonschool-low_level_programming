#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * get_new_node - make a new node
 * @t: the data to store
 *
 * Return: the pointer to the new node
 */
dlistint_t *get_new_node(int t)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = t;
	ptr->prev = NULL;
	ptr->next = NULL;
	return (ptr);
}


/**
 * get_ptr_at_index - returns the nth node of a node
 * @head: the head pointer points to a dlistint_t
 * @index: the index of the node to be returned
 *
 * Return: a pointer to a node
 */
dlistint_t *get_ptr_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	/*temp walks to the index*/
	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	/*index is out of range, bigger than the length of the list*/
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
/**
 * dlistint_t *insert_dnodeint_at_index - inserts a
 *	new node at a given position
 * @headptr: the head pointer points to a dlistint_t
 * @idx: the index to insert the node
 * @n: the integer for the new node
 *
 * Return: a pointer to a node
 */
dlistint_t *insert_dnodeint_at_index(
dlistint_t **headptr, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = *headptr, *b4 = NULL;
	unsigned int i;

	if (*headptr == NULL)
		return (idx != 0 ? NULL : add_dnodeint(headptr, n));
	for (i = 0; temp != NULL; i++)
	{
		if (idx == i)
		{	/*beginning*/
			if (idx == 0)
			{
				new_node = add_dnodeint(headptr, n);
				return (new_node);
			}
			/*last*/
			/**else if (temp->next == NULL){
			*	new_node = add_dnodeint_end(headptr, n);
			*	return (new_node);
			*} */
			else
			{	/*make a new node first*/
				new_node = get_new_node(n);
				/*set the ptr b4 one node before temp*/
				b4 = temp->prev, b4->next = new_node;
				new_node->prev = b4, temp->prev = new_node;
				new_node->next = temp;
				return (new_node);
			}
		}
		temp = temp->next;
	}
	if (idx == i)
		return (add_dnodeint_end(headptr, n));
	return (NULL);
}
