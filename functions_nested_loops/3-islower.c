#include "main.h"
/**
 * _islower() - checks if the int @c passes in the function is lowercaer;
 * @c: the character to check
 *
 * Return: 1 if yes, otherwise 0 will be returned
 *
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
