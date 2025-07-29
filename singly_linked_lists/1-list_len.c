#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @i: the pointer points to the list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *i)
{
	int cnt_node = 0;

	while (i != NULL)
	{
		/**
		* i stores address of current node, next stores address of next node,
		* i->next can get the address of next node, i = i->next is to change
		* the address of current node into the address of the next node
		*/
		i = i->next;
		cnt_node++;
	}
	return (cnt_node);
}
