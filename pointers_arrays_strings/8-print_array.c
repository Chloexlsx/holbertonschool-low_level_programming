#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of a string
 *		,followed by a new line
 * @a: the formal parameter to be printed
 * @n: the number of element to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf('\n');
}
