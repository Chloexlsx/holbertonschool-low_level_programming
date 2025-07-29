#include "lists.h"


/**
 * print_num - convert integer into char and print it recursively
 * @n: string length from print_liset
 *
 * Return: void;
 */
void print_num(unsigned int n)
{
	char j = 0;

	if (n / 10)
	{
		print_num(n / 10);
	}
	j = '0' + (n % 10);
	_putchar(j);
}

/**
 * print_str - print character using _putchar
 * @s: the string passed from print_list
 *
 * Return: void;
 */
void print_str(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
}

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
		_putchar('[');
		print_num(i->len);
		_putchar(']');
		_putchar(' ');
		if (i->str == NULL)
		{
			print_str("(nil)");
		}
		else
			print_str(i->str);
		_putchar('\n');
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
