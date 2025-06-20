#include "main.h"
/**
 * function int  _islower() -
 * checks if the int c passes in the function is lowercaer;
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
