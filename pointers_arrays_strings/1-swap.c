#include "main.h"

/**
 * swap_int - swap the values of its two formal parameters.
 * @a: the formal parameter to be changed
 * @b: the other parameter to be swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
