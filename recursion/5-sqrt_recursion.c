#include "main.h"

/**
 * sqrt_helper - recursively tries successive integers to find root of n
 * @n: the target number
 * @i: the current number try to find i * i == n
 *
 * Return: i if found it;
 *		-1 if i * i is already pass n, so not found
 *		otherwise recurse with i + 1
 */
static int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
