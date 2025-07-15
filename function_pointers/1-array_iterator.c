#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - executes a function given
 *		as a parameter on each element of an array
 *@array: int pointer to an array
 *@size: size of the array
 *@action: the function pointer
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/*check inputs*/
	if (array == NULL || action == NULL)
		return;

	/*iterating thru the array*/
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
