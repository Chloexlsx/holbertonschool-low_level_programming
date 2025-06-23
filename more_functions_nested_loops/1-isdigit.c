#include "main.h"

/**
 * _isdigit - a function that checks for a didgit
 * @c: the formal parameter for checking
 *
 * Return: 1 if true, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
