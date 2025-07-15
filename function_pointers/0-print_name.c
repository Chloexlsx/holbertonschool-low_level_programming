#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints a name
 *@name: char pointer
 *@f: the function pointer
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/*if either name of f is NULL, do nothing*/
	if (name == NULL || f == NULL)
		return;

	/*invoke the callback to do the actual printing*/
	f(name);
}
