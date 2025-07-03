#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	int inner(int target, int i)
	{
		if (i * i == target)
			return (i);
		if (i * i > target)
			return (-1);
		return (inner(target, i + 1));
	}

	if (n < 0)
		return (-1);
	return (inner(n, 0));
}
