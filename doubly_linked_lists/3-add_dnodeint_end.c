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
dlistint_t *add_dnodeint_end(dlistint_t **headptr, const int n)
{
	dlistint_t *new_node_ptr;
	dlistint_t *temp;

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
	temp = *headptr;
	/*temp walk to the last node*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*when temp os at the last node, link the new node*/
	temp->next = new_node_ptr;
	new_node_ptr->prev = temp;
	return (new_node_ptr);
}
