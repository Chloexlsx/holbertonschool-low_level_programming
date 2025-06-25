#include "main.h"

/**
 * reverse_array - reverse the content of an array of int
 * @a: the array to be reversed
 * @n: the number of the elements
 *
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp = 0;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
