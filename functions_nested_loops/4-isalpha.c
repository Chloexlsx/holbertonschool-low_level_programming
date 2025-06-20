#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: always 1 if yes; otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
