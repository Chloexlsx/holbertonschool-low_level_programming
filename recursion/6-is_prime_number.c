#include "main.h"

/**
 * prime_helper - recursively tries successive integers to find the prime
 * @n: the target number
 * @i: the current divisor
 *
 * Return: 1 if found it,
 *		0 if false
 */
int prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_helper(n, i + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 *	using trial division - if n is a multiple of any integer
 *	between 2 and sqrt root of n
 * @n: the number to test
 *
 * Return: 1 is true, 0 if false
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_helper(n, 2));
}
