#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the formal parameter for checking
 *
 * Return: 1 if true, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
