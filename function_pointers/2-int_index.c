#include "function_pointers.h"
#include <stddef.h>

/**
 *int_index - a function that searches for an integer
 *@array: int pointer to an array
 *@size: size of the array
 *@cmp: a pointer to the function to compare integers
 *
 *Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*check inputs*/
	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	/*iterating thru the array*/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
		{
			return (i);
		}
	}
	return (-1);
}
