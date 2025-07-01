#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @b: the constant byte
 * @n: the first n bytes of the memory area
 * @s: the pointer points to the string
 *
 * Return: a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}

return (s);
}
