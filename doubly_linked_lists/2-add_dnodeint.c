#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_node - make a new node
 * @t: the data to store
 *
 * Return: the pointer to the new node
 */
dlistint_t *new_node(int t)
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
 * dlistint_t *add_dnodeint- add a new node in the beginning of a dlinklist
 * @headptr: the iterator pointer points to a dlistint_t
 * @n: an integer
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **headptr, const int n)
{
	dlistint_t *new_node_ptr;
	dlistint_t *head;

	/*make a new node*/
	new_node_ptr = new_node(n);
	if (new_node_ptr == NULL)
		return (NULL);
	/*assign a new node to the head if the pointer to the head is NULL*/
	if (*headptr == NULL)
	{
		*headptr = new_node_ptr;
		return (new_node_ptr);
	}
	/*start to add a new node in the beginning of the list*/
	head = *headptr;
	head->prev = new_node_ptr;
	new_node_ptr->next = head;

	/**
	* for line *headptr = new_node_ptr; I used head = new_node_ptr; initially,
	*	however, it does not work, it will not change the actual head
	*	value in main(). Only thru headptr, because when the function
	*	is called, the actual head in the main can only be accessed
	*	using headptr. Changing the value of head I declare
	*	in add_dnoteint will not change the head in main.
	*/
	*headptr = new_node_ptr;
	return (new_node_ptr);
}
