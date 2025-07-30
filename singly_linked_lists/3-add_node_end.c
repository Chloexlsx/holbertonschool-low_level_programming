#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_node - allocate a memory in heap for new_node,
 *	so when call stack cleans the add_node() when backs to main(),
 *	new_node memory will not be erased.
 * @s: the str to duplicate
 *
 * Return: the pointer to the new node
 */
list_t *new_node(const char *s)
{
	list_t *ptr;
	int i;

	/*malloc wil return the address of the memory allocated*/
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(s);
	ptr->next = NULL;

	for (i = 0; s[i] != '\0'; i++)
		;
	ptr->len = i;
	return (ptr);
}

/**
 * list_t *add_node_end - adds a new node at the beginning of a list_t list
 * @headptr: the pointer points to the head pointer to the first node
 * @str: the str to duplicate
 *
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **headptr, const char *str)
{
	list_t *new_node_ptr;
	/**
	*	usually, we use the pointer to 1st node
	*	which is a variable called head(type = list_t*)
	*	but there is no head. So, we use *headptr (= head)
	*	to assigen temp
	*/
	list_t *temp = *headptr;

	/**
	*	pass the pointer str to make_node(),
	*	as it expects a pointer as argument
	*/
	new_node_ptr = new_node(str);
	if (new_node_ptr == NULL)
		return (NULL);
	/**
	*	use headptr to access the value store in head
	*	which is the address of the 1st node.
	*	Then, assigned that value to the address of the new_node
	*/
	/*temp walk to the last node in the list*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node_ptr;

	return (new_node_ptr);
}
