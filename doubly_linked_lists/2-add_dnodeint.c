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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}

	return (node);


}
