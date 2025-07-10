#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the first value in the array
 * @max: the last value in the array
 *
 * Return: pointer to the newly allocated array, or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int len = 0;

	/*if min > max*/
	if (min > max)
		return (NULL);
	/*count len for malloc*/
	len = max - min + 1;
	/*allocate memory*/
	arr = malloc(len * sizeof(int));
	if (arr ==  NULL)
		return (NULL);
	/*assign value*/
	for (i = 0; i < len; i++)
		arr[i] = min + i;
	return (arr);
}
